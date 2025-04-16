# SmartGreenHouse
A fully automated embedded system designed to monitor and control environmental conditions in a small-scale greenhouse. This project uses sensors and actuators to optimize plant growth by managing temperature, humidity, soil moisture, and lighting—ensuring ideal conditions around the clock.


# 🌿 Smart Greenhouse System 🌦️  
> _An intelligent, fully automated greenhouse powered by sensors, logic, and a touch of brilliance._

![Smart Greenhouse](https://img.shields.io/badge/Project-Smart_Greenhouse-brightgreen?style=for-the-badge)  
![Automation](https://img.shields.io/badge/Automation-100%25-blue?style=for-the-badge)  
![Status](https://img.shields.io/badge/Status-Under%20Development-yellow?style=for-the-badge)

---

## 🌱 About the Project

Welcome to the future of sustainable gardening!  
This **Smart Greenhouse System** is a self-regulating ecosystem designed to monitor and optimize conditions for plant growth without human intervention.

Built with a blend of **embedded systems**, **sensors**, and **automation logic**, it simulates a hill-station-like environment, especially tailored for flowering plants. Ideal for hobbyists, students, and eco-enthusiasts alike 🌸🌿

---

## 🧠 Features at a Glance

🔹 **🌡️ Temperature & Humidity Control**  
– Uses the DHT22 sensor to maintain an optimal growing climate.  

🔹 **💧 Automated Irrigation System**  
– Soil moisture sensor (potentiometer) detects dryness and triggers a **DC pump** via **relay** to mist the plants.  

🔹 **🌞 Adaptive Lighting**  
– A light sensor detects darkness and activates **5 synchronized LEDs** to ensure your plants never miss the sun.  

🔹 **🧠 Intelligent Automation**  
– Smart logic ensures water and light are only used when truly necessary, saving energy and resources.

🔹 **📦 Test Case Coverage**  
– Designed with multiple real-world edge cases to validate system behavior under all possible scenarios.

---

## 🛠️ Tech Stack & Hardware

| Component               | Description                            |
|------------------------|----------------------------------------|
| 🌡️ DHT22 Sensor         | Monitors temperature & humidity        |
| 💧 Soil Moisture Sensor | Potentiometer-based for simplicity     |
| 🔆 Light Sensor         | Detects ambient brightness             |
| 💡 LEDs (x5)           | Provide artificial light (controlled together) |
| 🚿 DC Water Pump        | Mist plants with relay-controlled automation |
| ⚡ Relay Module         | Switches pump on/off safely            |
| 🤖 Arduino / ESP32     | Central controller                     |

---

## 🚀 System Workflow

```mermaid
flowchart TD
    S1[DHT22] --> C[Microcontroller]
    S2[Soil Moisture Sensor] --> C
    S3[Light Sensor] --> C
    C --> A1[LEDs ON/OFF]
    C --> A2[Pump ON/OFF via Relay]
    C --> D[Smart Decision Logic]
📷 Sneak Peek (Add images/gifs when available)
Coming soon: Real-life setup photos, dashboard previews, and component connections!

🧪 Test Cases

Scenario	Expected Action
Low Light Detected	Turn on all 5 LEDs
Soil Too Dry	Activate pump for misting
Temp/Humidity Too High/Low	Alert or adjust conditions
Night Time + Dry Soil	Both light & pump activate
All Conditions Optimal	System remains idle
📁 Project Structure
bash
Copy
Edit
Smart-Greenhouse-System/
├── docs/               # Diagrams & Schematics
├── firmware/           # Arduino/ESP32 code
├── simulation/         # Pre-purchase simulation environment
├── images/             # Photos & Gifs of setup
├── README.md           # You're here!
✨ Future Plans
 Add IoT support with Blynk/MQTT for remote monitoring

 Integrate solar power options

 Mobile app interface for notifications

 Voice command support (maybe 😄)

🤝 Contributing
Got suggestions? Spotted a bug? Want to improve the system?
You're welcome to fork, contribute or open issues!

❤️ Credits
This project is created with love and passion by [Your Name].
Special thanks to the community of DIY makers, farmers, and developers who inspire innovation every day.
