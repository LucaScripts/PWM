/*
 * Autor: Lucas Dias da Silva
 * Descrição: Este código controla um servomotor e um LED RGB usando a placa Raspberry Pi Pico. 
 *            Ele configura o PWM na GPIO 22 e define funções para mover o servomotor 
 *            para ângulos específicos (0, 90 e 180 graus) e para realizar uma varredura 
 *            suave entre 0 e 180 graus. Além disso, configura e controla um LED RGB na GPIO 12.
 */

#include "pico/stdlib.h"
#include "hardware/pwm.h"
#include "hardware/gpio.h"
#include <stdio.h>

#define SERVO_PIN 22          // GPIO 22 para controle do servomotor
#define PWM_WRAP 12500        // Valor de "wrap" para o PWM 12500
#define LED_PIN 12            // GPIO 12 para controle do LED RGB

// Função para configurar o PWM
void setup_pwm() {
    // Configura a GPIO 22 para funcionar como PWM
    gpio_set_function(SERVO_PIN, GPIO_FUNC_PWM);

    // Obtém o slice associado a gpio 22
    uint slice_num = pwm_gpio_to_slice_num(SERVO_PIN);

    // Define o valor de "wrap", isto é, o contador máximo do PWM
    pwm_set_wrap(slice_num, PWM_WRAP);

    // Configura o divisor de clock do PWM
    pwm_set_clkdiv(slice_num, 200); // 125 MHz

    // Habilita o PWM 
    pwm_set_enabled(slice_num, true);
}

// Função para definir o ângulo do servomotor, recebe como parâmetro o período ativo em microssegundos
void set_servo_angle(uint32_t pulso_ms) {
    // Obtém o número do "slice" de PWM associado à GPIO 22
    uint slice_num = pwm_gpio_to_slice_num(SERVO_PIN);

    // Converte o tempo de pulso em microssegundos para o valor de contagem do PWM
    uint32_t largura_pulso = (pulso_ms * PWM_WRAP) / 20000; // 20000 µs = 20 ms (período)

    // Define o nível do pulso (duty cycle), realiza o acionamento do servo na posição específica
    pwm_set_chan_level(slice_num, pwm_gpio_to_channel(SERVO_PIN), largura_pulso);
}

// Função para mover o servomotor para 180 graus
void move_180() {
    set_servo_angle(2400); // 2.400 µs = 180 graus
    printf("Servo motor em 180 graus\n");
    sleep_ms(5000);        // Aguarda 5 segundos
}

// Função para mover o servomotor para 90 graus
void move_90() {
    set_servo_angle(1470); // 1.470 µs = 90 graus
    printf("Servo motor em 90 graus\n");
    sleep_ms(5000);        // Aguarda 5 segundos
}

// Função para mover o servomotor para 0 graus
void move_0() {
    set_servo_angle(500); // 500 µs = 0 graus
    printf("Servo motor em 0 graus\n");
    sleep_ms(5000);       // Aguarda 5 segundos
}

// Função para movimentação suave do servomotor entre 0 e 180 graus
void sweep() {
    uint32_t pulse = 500; // Começa em 0 graus (500 µs)
    int contador_led = 0; // Contador para atualizar o LED
    while (true) {
        // Movimento de 0 a 180 graus
        while (pulse <= 2400) {
            set_servo_angle(pulse); 
            printf("Servo motor em %d microsegundos\n", pulse);
            pulse += 5;             
            sleep_ms(10);                 
            
            // Atualiza o LED: a cada 10 iterações
            contador_led++;
            if (contador_led >= 10) {
                gpio_xor_mask(1u << LED_PIN);  // Inverte o estado do LED
                contador_led = 0;
            }
        }
        // Movimento de 180 a 0 graus
        while (pulse >= 500) {
            set_servo_angle(pulse); 
            printf("Servo motor em %d microsegundos\n", pulse);
            pulse -= 5;             
            sleep_ms(10);                 
            
            // Atualiza o LED: a cada 10 iterações
            contador_led++;
            if (contador_led >= 10) {
                gpio_xor_mask(1u << LED_PIN);  // Inverte o estado do LED
                contador_led = 0;
            }
        }
    }
}

// Função para configurar o LED RGB
void setup_led() {
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
}

// Função principal
int main() {
    stdio_init_all(); // Inicializa a entrada e saída padrão
    setup_pwm();      // Configura o PWM
    setup_led();      // Configura o LED RGB

    // Movimentos pré-definidos
    move_180(); // Move para 180 graus e aguarda 5 segundos
    move_90();  // Move para 90 graus e aguarda 5 segundos
    move_0();   // Move para 0 graus e aguarda 5 segundos

    // Inicia a movimentação suave do servomotor
    while (true) {
        sweep();   // Movimenta o servomotor e pisca o LED
    }

    return 0;
}