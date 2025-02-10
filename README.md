<div align="center">
  <img src="https://github.com/LucaScripts/ComunicaoSerial/blob/main/docs/Group%20658.png?raw=true" alt="Logo do Projeto" width="50%"/>
</div>

# **Projeto de Controle de Servomotor com RP2040 e BitDogLab**

📌 **Autor**: Lucas Dias  
📆 **Data**: 10/02/2025  

Este projeto implementa o controle de um servomotor utilizando o microcontrolador **Raspberry Pi Pico W** e o módulo **PWM**. A simulação foi realizada no ambiente **Wokwi**, sem a necessidade de circuitos adicionais de interface.

---

## 📌 **Objetivos**
✅ Configurar o PWM no RP2040 para controle preciso de um servomotor.  
✅ Definir posições específicas do servomotor (0°, 90° e 180°).  
✅ Implementar movimentação suave do servomotor entre 0° e 180°.  
✅ Observar o comportamento do LED RGB durante a variação do PWM.  

---

## 🛠 **Materiais Necessários**
🔹 1x **Raspberry Pi Pico W**  
🔹 1x **Servomotor Micro Servo** (GPIO 22)  
🔹 1x **LED RGB** (GPIO 12 para testes)  
🔹 Simulador **Wokwi**  

---

## 🔧 **Configuração do PWM**
- **Frequência:** 50Hz (Período de 20ms).  
- **Ciclo Ativo:**
  - **2.400µs** (180°)
  - **1.470µs** (90°)
  - **500µs** (0°)  
- **Movimentação Suave:** Incremento de ±5µs a cada 10ms para transição entre 0° e 180°.

---

## 🏗 **Esquema de Ligação**
| Componente  | Pino do Pico W |
|------------|---------------|
| Servomotor | GPIO 22       |
| LED RGB    | GPIO 12       |

---

## 📜 **Implementação**
### 1️⃣ **Definição do PWM**
- Configuração da GPIO 22 com frequência de 50Hz.
- Ajuste do ciclo ativo para 0°, 90° e 180°.
- Espera de 5 segundos em cada posição.

### 2️⃣ **Movimentação Suave**
- Transição gradual entre 0° e 180°.
- Incremento de 5µs no ciclo ativo com atraso de 10ms.

### 3️⃣ **Teste com LED RGB**
- Observação do comportamento do LED RGB no GPIO 12 durante a variação do PWM.

---

## 📥 Clonando o Repositório e Compilando o Código

Para baixar o código e começar a trabalhar com ele, clone o repositório e carregue o código na placa seguindo os passos abaixo:

![Clonando o Repositório](https://github.com/LucaScripts/PWM/blob/main/docs/Bem-vindo%20-%20Visual%20Studio%20Code%202025-01-31%2018-49-32%20(1).gif?raw=true)

---

## 🚦 **Demonstração da Simulação Wokwi**

Abaixo está uma prévia da simulação da comunicação serial no **Wokwi**:
![Servo Motor](https://github.com/LucaScripts/PWM/blob/main/docs/diagram.json%20-%20pwm%20-%20Visual%20Studio%20Code%202025-02-08%2018-16-53.gif?raw=true)  

Abaixo está uma prévia da simulação da comunicação serial no **Wokwi** com o LED em paralelo:

![LED](https://github.com/LucaScripts/PWM/blob/main/docs/diagram.json%20-%20pwm%20LED.gif?raw=true) 

🔗 [Simulação no Wokwi](https://wokwi.com/projects/422542611316324353) 

---


## 🎥 **Demonstração do Projeto Completo**
🔗 [Assista à Demonstração](https://drive.google.com/file/d/1_ax07drMcusfKGuXP3P1VEitiIQVuKGi/view?usp=sharing)

---

## 📌 **Melhorias Futuras**
- **🖥️ Interface Gráfica:** Implementação de controle manual via interface.
- **📡 Comunicação Serial:** Ajuste do ângulo do servomotor via comandos UART.
- **🔄 Otimização do PWM:** Melhor precisão no ajuste dos ângulos.

---
