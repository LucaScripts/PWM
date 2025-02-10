<div align="center">
  <img src="https://github.com/LucaScripts/ComunicaoSerial/blob/main/docs/Group%20658.png?raw=true" alt="Logo do Projeto" width="50%"/>
</div>

# **Projeto de Comunicação Serial e Controle de Servomotor com RP2040 e BitDogLab**

📌 **Autor**: Lucas Dias  
📆 **Data**: 07/02/2025

Este projeto integra a comunicação serial com o **RP2040**, a placa de desenvolvimento **BitDogLab** e a utilização do módulo **PWM** para controle de um servomotor.

---

## 📌 **Objetivos**
✅ **Compreensão da comunicação serial** em microcontroladores.  
✅ **Aplicação prática de UART e I2C** para controle de dispositivos.  
✅ **Manipulação de LEDs comuns e WS2812**.  
✅ **Implementação de interrupções e debouncing** para botões.  
✅ **Controle de servomotor utilizando PWM**.  
✅ **Desenvolvimento de um sistema embarcado** funcional, combinando hardware e software.

---

## 🛠 **Materiais Necessários**
🔹 1x **Placa BitDogLab**  
🔹 1x **Matriz 5x5 de LEDs WS2812** (GPIO 7)  
🔹 1x **LED RGB** (GPIOs 11, 12, 13)  
🔹 2x **Botões** (GPIO 5 e 6)  
🔹 1x **Display SSD1306** (I2C, GPIOs 14 e 15)  
🔹 1x **Servomotor (Micro Servo)** (GPIO 22)  

---

## 🏗 **Esquema de Ligação**
| Componente        | Pino do BitDogLab   |
|-------------------|---------------------|
| Matriz de LEDs    | GPIO 7              |
| LED RGB Verde     | GPIO 11             |
| LED RGB Vermelho  | GPIO 12             |
| LED RGB Azul      | GPIO 13             |
| Botão A           | GPIO 5              |
| Botão B           | GPIO 6              |
| Display SSD1306   | GPIO 14 e GPIO 15   |
| Servomotor        | GPIO 22             |

**⚠️ OBS**: Conecte o lado positivo dos LEDs e botões aos pinos correspondentes e o lado negativo ao GND.

---

## 📜 **Funcionalidades do Projeto**
### 1️⃣ **Modificação da Biblioteca `font.h`**
- Criação de novos caracteres minúsculos para exibição no display SSD1306.

### 2️⃣ **Entrada de Caracteres via PC**
- Caracteres digitados no **Serial Monitor** são exibidos no display SSD1306.
- Números entre 0 e 9 acionam a exibição do símbolo correspondente na matriz 5x5 de LEDs WS2812.

### 3️⃣ **Controle do Servomotor via PWM**
- Definição da frequência PWM para **50Hz** (período de 20ms).
- Ajuste do ângulo do servomotor para **0°, 90° e 180°**, com intervalos de 5 segundos.
- Implementação de um movimento suave entre **0° e 180°**, com incremento de ±5µs a cada 10ms.

### 4️⃣ **Interação com os Botões**
- **Botão A**: Alterna o estado do **LED RGB Verde** e exibe a informação no display SSD1306 e Serial Monitor.
- **Botão B**: Alterna o estado do **LED RGB Azul** e exibe a informação no display SSD1306 e Serial Monitor.

### 5️⃣ **Teste com LED RGB durante o Controle PWM**
- Teste realizado com a GPIO 12 (LED RGB Vermelho) para observar o comportamento da iluminação durante a variação do PWM.

---

## 📥 **Instalação e Execução**

### 1️⃣ **Configuração do Ambiente**
Certifique-se de ter o **Pico SDK** instalado e configurado no seu sistema.

🔗 [Guia Oficial do Raspberry Pi Pico SDK](https://github.com/raspberrypi/pico-sdk)

### 2️⃣ **Clonando o Repositório e Enviando para o RP2040**
Clone o repositório e compile o código para a placa utilizando o **VS Code** e o **Pico SDK**.

![Clonando o Repositório](https://github.com/LucaScripts/ComunicaoSerial/blob/main/docs/Bem-vindo%20-%20Visual%20Studio%20Code%202025-01-31%2018-49-32%20(1).gif?raw=true)

Após a compilação, copie o arquivo `.uf2` gerado para o Raspberry Pi Pico (modo bootloader ativado).

---

## 🚦 **Demonstração da Simulação Wokwi**
🔗 [Simulação Wokwi](https://wokwi.com/projects/422432562065936385)

**Vídeo da Simulação no Wokwi:**  
🔗 [Link do Vídeo](https://www.dropbox.com/scl/fi/i32f4t9dqggn4c1durb4o/2025-02-04-08-52-05.mkv?rlkey=s6ofq9yumuts3h8chte052cuj&dl=0)

---

## 🎯 **Funcionamento**
- **Botão A** alterna o **LED Verde**.
- **Botão B** alterna o **LED Azul**.
- **Display SSD1306** exibe o estado dos LEDs em tempo real.
- **Matriz de LEDs WS2812** exibe números de 0 a 9 quando digitados no Serial Monitor.
- **Servomotor** movimenta-se entre **0° e 180°** suavemente.

---

## 📌 **Melhorias Futuras**
- **🚀 Controle Manual:** Implementar um botão para controle manual do servomotor.
- **📡 Suporte a Múltiplos Dispositivos:** Expandir o sistema para comunicação com vários dispositivos ao mesmo tempo.
- **🖥️ Interface Gráfica no PC:** Criar uma interface para monitorar e interagir com os dispositivos conectados.
- **🔄 Otimização da Comunicação I2C:** Melhorar a comunicação com o display SSD1306 para atualizações mais rápidas.
- **🔄 Novos Protocolos de Comunicação:** Adicionar suporte a SPI e UART para integrar mais dispositivos e sensores.

---

## 🎥 **Demonstração do Projeto Completo**
🔗 [Assista à Demonstração do Projeto](https://drive.google.com/file/d/1fVg4l7feubeo3MYYYcW3coXZ7cTFD5c2/view?usp=sharing)


