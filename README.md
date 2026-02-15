# Arduino Fire + PIR Security + Light Control System (Bluetooth)

This project is an Arduino-based safety and home automation system that combines a **fire sensor**, **PIR motion sensor**, and **Bluetooth controlled relays**.

It can detect fire and human motion, trigger buzzer and LED alerts, and also control lights or appliances wirelessly using Bluetooth commands.

---

## 🔧 Hardware Used

- Arduino UNO / Nano
- Fire Sensor Module
- PIR Motion Sensor
- 4-Channel Relay Module (Active LOW)
- Bluetooth Module (HC-05 / HC-06)
- Buzzer (2x)
- Indicator LEDs
- Lights / Appliances (via relay)
- Jumper Wires
- 5V Supply

---

## 📦 Required Libraries

No external libraries required.  
Uses built-in Arduino Serial and digital I/O functions.

---

## 🔌 Pin Connections (As per Code)

### 🔥 Fire Sensor

| Fire Sensor | Arduino |
|-------------|----------|
| OUT | D8 |
| VCC | 5V |
| GND | GND |

---

### 🚶 PIR Motion Sensor

| PIR | Arduino |
|------|----------|
| OUT | D9 |
| VCC | 5V |
| GND | GND |

---

### ⚡ Relay Outputs (Lights / Appliances)

| Relay Channel | Arduino Pin |
|----------------|-------------|
| Relay 1 | D3 |
| Relay 2 | D4 |
| Relay 3 | D5 |
| Relay 4 | D2 |

> Relays are **Active LOW** (LOW = ON, HIGH = OFF)

---

### 🔔 Alert Outputs

| Device | Arduino Pin |
|----------|-------------|
| Fire LED | D10 |
| Fire Buzzer | D11 |
| Motion LED | D6 |
| Motion Buzzer | D7 |

---

### 📡 Bluetooth Module

| Bluetooth | Arduino |
|------------|----------|
| TXD | RX (D0) |
| RXD | TX (D1) *(use voltage divider recommended)* |
| VCC | 5V |
| GND | GND |

> Disconnect TX/RX while uploading code.

---

## ✨ Features

- 🔥 Fire detection alert
- 🚶 Motion detection alert
- 🔔 Buzzer + LED warning system
- 💡 Bluetooth controlled light/appliance switching
- 📡 Serial command relay control
- 🛡️ Dual sensor safety monitoring

---

## 🎮 Bluetooth Light / Relay Commands

| Command | Action |
|-----------|---------|
| A / a | Relay 1 ON / OFF |
| B / b | Relay 2 ON / OFF |
| C / c | Relay 3 ON / OFF |
| D / d | Relay 4 ON / OFF |

---

## ⚙️ Working Logic

- Bluetooth command received → corresponding relay toggles
- Fire sensor triggered → LED + buzzer ON + serial alert
- PIR detects motion → LED + buzzer ON + serial alert
- Sensor inputs use **INPUT_PULLUP**
- LOW signal = detection event
- Status messages printed on Serial Monitor

---

## ▶️ How to Run

1. Connect sensors, relays and Bluetooth module
2. Upload Arduino code
3. Pair HC-05/HC-06 with mobile
4. Use Bluetooth terminal/app
5. Send A/B/C/D commands
6. Fire or motion triggers alarm outputs

---

## 📷 Circuit Diagram

Circuit diagram image will be added soon. Wiring table is provided above.

---

## 🎥 Working Video

https://www.youtube.com/shorts/8h9wifImD18

---

## ⚠️ Notes

- Sensors use INPUT_PULLUP logic
- LOW = triggered event
- Use optocoupler relay module preferred
- Keep all GND common
- Do not power appliances directly from Arduino
- Disconnect Bluetooth while uploading

---

## 👨‍💻 Author

Gautam — Robotics & Embedded Projects
