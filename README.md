# 🌿 Smart Greenhouse System 🌦️  
> _An intelligent, fully automated greenhouse powered by sensors, logic, and a touch of brilliance._

![Smart Greenhouse](https://img.shields.io/badge/Project-Smart_Greenhouse-brightgreen?style=for-the-badge)  
![Automation](https://img.shields.io/badge/Automation-100%25-blue?style=for-the-badge)  
![Status](https://img.shields.io/badge/Status-Under%20Development-yellow?style=for-the-badge)

---

## 🌱 About the Project

Welcome to the future of sustainable gardening!  
This **Smart Greenhouse System** is a self-regulating ecosystem designed to monitor and optimize conditions for plant growth without human intervention.

Built with a blend of **embedded systems**, **sensors**, and **automation logic**, A fully automated embedded system designed to monitor and control environmental conditions in a small-scale greenhouse. This project uses sensors and actuators to optimize plant growth by managing temperature, humidity, soil moisture, and lighting—ensuring ideal conditions around the clock.

---

## 🧠 Features at a Glance

🔹 **🌡️ Temperature & Humidity Control**  
– Uses the DHT22 sensor to maintain an optimal growing climate.  

🔹 **💧 Automated Irrigation System**  
– Soil moisture sensor (potentiometer) detects dryness and triggers a **DC pump** via **relay** to water the plants.  

🔹 **🌞 Adaptive Lighting**  
– A light sensor detects darkness and activates **3 synchronized LEDs** to ensure your plants never miss the sun.  

🔹 **🧠 Intelligent Automation**  
– Smart logic ensures water and light are only used when truly necessary, saving energy and resources.

🔹 **📦 Test Case Coverage**  
– Designed with multiple real-world edge cases to validate system behavior under all possible scenarios.

---
📡 Why ESP32?
The ESP32 is the brain of the system — a powerful, low-cost microcontroller with built-in Wi-Fi & Bluetooth, ideal for IoT and embedded automation projects.
Its key benefits in this Smart Greenhouse setup:

🔧 Dual-core processing for multitasking sensor readings and automation logic.

📶 Wi-Fi-ready, allowing future upgrades for remote monitoring/control.

⚡ Low power consumption, perfect for always-on systems.

🧠 Wide library support for sensors like DHT22, soil moisture, and relays.

The ESP32 is not just a controller — it's the smart gardener of this greenhouse! 🌱💡


🌐 Real-Time Web Monitoring (ESP32 Web Server)
To make the greenhouse truly smart, this project includes a local web server hosted on the ESP32, allowing you to:

🖥️ Monitor live sensor data (temperature, humidity, soil moisture, and light levels)

📡 Access it from any device connected to the same Wi-Fi network

⚡ No need for external cloud services – it's fast, private, and efficient!

How it works:
The ESP32 connects to your Wi-Fi network and starts a server.

It serves a clean web dashboard that auto-refreshes sensor values in real time.

Works perfectly on laptops, mobiles, or even smart TVs!

Simply enter the ESP32’s local IP in your browser and watch your plants thrive from the couch! 🌿📲


## 🛠️ Tech Stack & Hardware

| Component               | Description                            |
|------------------------|----------------------------------------|
| 🌡️ DHT22 Sensor         | Monitors temperature & humidity        |
| 💧 Soil Moisture Sensor | Detects soil moisture level    |
| 🔆 Light Sensor         | Detects ambient brightness             |
| 💡 LEDs (x3)           | Provide artificial light (controlled together) |
| 🚿 DC Water Pump        | Mist plants with relay-controlled automation |
| ⚡ Relay Module         | Switches pump on/off safely            |
| 🤖 ESP32     | Central controller                     |

---

🤝 Contributing
Got suggestions? Spotted a bug? Want to improve the system?
You're welcome to fork, contribute or open issues!

❤️ Credits
This project is created with love and passion by B Saran.
