<div align="center">
  <img src="https://github.com/LucaScripts/ComunicaoSerial/blob/main/docs/Group%20658.png?raw=true" alt="Logo do Projeto" width="50%"/>
</div>

# **Projeto de Controle de Servomotor com RP2040 e BitDogLab**

📌 **Autor**: Lucas Dias  
📆 **Data**: 05/02/2025  

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

## 🚦 **Demonstração da Simulação Wokwi**
🔗 [Simulação no Wokwi](https://wokwi.com/projects/422432562065936385)  
🔗 [Vídeo da Simulação](https://www.dropbox.com/scl/fi/i32f4t9dqggn4c1durb4o/2025-02-04-08-52-05.mkv?rlkey=s6ofq9yumuts3h8chte052cuj&dl=0)  

---

## 📌 **Melhorias Futuras**
- **🖥️ Interface Gráfica:** Implementação de controle manual via interface.
- **📡 Comunicação Serial:** Ajuste do ângulo do servomotor via comandos UART.
- **🔄 Otimização do PWM:** Melhor precisão no ajuste dos ângulos.

---

## 🎥 **Demonstração do Projeto Completo**
🔗 [Assista à Demonstração](https://drive.google.com/file/d/1fVg4l7feubeo3MYYYcW3coXZ7cTFD5c2/view?usp=sharing)




