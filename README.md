# Controle de Servomotor com Raspberry Pi Pico

📌 Autor: Lucas Dias

📆 Data: 08/02/2025

Este projeto implementa o controle de um **servomotor** utilizando o **Raspberry Pi Pico**, configurando o **PWM (Pulse Width Modulation)** para ajustar o ângulo do servo entre **0° e 180°**. Além disso, o código permite movimentação suave do servo através de incrementos controlados.

---

## 📌 **Características**
✅ Controle preciso do **ângulo do servomotor** via PWM.  
✅ Funções dedicadas para posicionamento em **0°, 90° e 180°**.  
✅ Implementação de **varredura automática** do servo entre 0° e 180°.  
✅ Código modular e bem documentado.  

---

## 🛠 **Materiais Necessários**
🔹 1x **Raspberry Pi Pico**  
🔹 1x **Servomotor (SG90 ou compatível)**  
🔹 1x **Fonte de alimentação 5V**  
🔹 3x **Fios jumper**  

---

## 🏗 **Esquema de Ligação**
| Componente  | Pino do Raspberry Pi Pico |
|-------------|---------------------------|
| Sinal (PWM) | GPIO 22                   |
| VCC (5V)    | VBUS                      |
| GND         | GND                        |

**⚠️ OBS:** Conecte a alimentação do servomotor corretamente para evitar danos ao Raspberry Pi Pico.

---

## 📜 **Instalação e Execução**

### **1️⃣ Configurar o ambiente**
Certifique-se de ter o **Pico SDK** instalado e configurado no seu sistema.  

Se ainda não configurou, siga as instruções oficiais:  
🔗 [Guia Oficial do Raspberry Pi Pico SDK](https://github.com/raspberrypi/pico-sdk)

## 📥 Clonando o Repositório e Compilando o Código

Para baixar o código e começar a trabalhar com ele, clone o repositório e carregue o código na placa seguindo os passos abaixo:

![Clonando o Repositório](https://github.com/LucaScripts/Clock-e-Temporizadores/blob/main/docs/Bem-vindo%20-%20Visual%20Studio%20Code%202025-01-31%2018-49-32.gif?raw=true)

Após a compilação, copie o arquivo `.uf2` gerado para o Raspberry Pi Pico (modo bootloader ativado).

---

## 🎯 **Funcionamento**
- O código inicia configurando o **PWM** na **GPIO 22**.  
- O servomotor se move automaticamente para **180°**, depois **90°**, e em seguida **0°**, aguardando **5 segundos** em cada posição.  
- Após isso, inicia a **varredura contínua** do ângulo de **0° a 180°** e de volta a **0°** de forma suave.  
- O processo continua indefinidamente até que o código seja interrompido.  

---

## 🚦 Demonstração da Simulação

Abaixo está uma prévia da simulação do controle do servomotor no **Wokwi**:

![Simulação do Servomotor no Wokwi](https://github.com/LucaScripts/PWM/blob/main/docs/diagram.json%20-%20pwm%20-%20Visual%20Studio%20Code%202025-02-08%2018-16-53.gif?raw=true)


## Entrega
- **Código-Fonte**: Disponível neste repositório.
- **Vídeo de Demonstração**: Explicação do funcionamento e demonstração prática na placa BitDogLab.
  - Link para o vídeo: 

