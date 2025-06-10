# 🎤 Voice-Controlled LCD Display using Arduino

This project demonstrates a simple voice-controlled system using **Arduino UNO**, a **Bluetooth module**, and a **16x2 LCD display**. It receives voice commands via Bluetooth and displays the message on the LCD in real time.

---

## 🛠️ Components Used

- Arduino UNO  
- 16x2 LCD Display  
- HC-05/HC-06 Bluetooth Module  
- Jumper wires  
- Breadboard  
- Android smartphone with a Bluetooth terminal app (for voice-to-text)

---

## ⚙️ How It Works

1. Voice commands are spoken into a mobile app.  
2. The app converts voice to text and sends it via Bluetooth.  
3. Arduino receives the text using `SoftwareSerial`.  
4. The command is displayed on the LCD and printed to the serial monitor.

---

## 🔌 Circuit Connections

| Component     | Arduino Pin |
|---------------|-------------|
| LCD RS        | 8           |
| LCD EN        | 9           |
| LCD D4        | 10          |
| LCD D5        | 11          |
| LCD D6        | 12          |
| LCD D7        | 13          |
| Bluetooth TX  | Pin 6 (RX)  |
| Bluetooth RX  | Pin 7 (TX)  |

> ⚠️ **Note:** Use a voltage divider on the RX pin of the Bluetooth module to avoid applying 5V directly.

---

## 🧾 Code Overview

- Uses `LiquidCrystal` for controlling the LCD display.  
- Uses `SoftwareSerial` for communication with the Bluetooth module.  
- Displays a fixed **"Command:"** label on the first row of the LCD.  
- Shows the received command on the second row and prints it to the Serial Monitor.

---

## ▶️ Getting Started

1. Upload the provided Arduino code to the Arduino UNO using the Arduino IDE.  
2. Connect all components as per the circuit connections above.  
3. Pair your smartphone with the HC-05/HC-06 module (default PIN: `1234` or `0000`).  
4. Use any voice-to-text Bluetooth terminal app to send a command.  
5. The command will be displayed on the LCD and echoed to the serial monitor.

---

## 🚀 Further Development Ideas

- Add support for multiple languages or character sets.  
- Integrate motors, relays, or actuators to respond to specific voice commands.  
- Add EEPROM or SD card support to log command history.  
- Use a standalone voice recognition module (e.g., Elechouse VR module) for offline control.  
- Upgrade to Wi-Fi using ESP8266/ESP32 for cloud integration or web-based control.  
- Add command filtering, validation, or feedback for enhanced interaction.

---

