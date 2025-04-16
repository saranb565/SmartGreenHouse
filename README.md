# 🌿 Smart Greenhouse System 🌦️  
> _An intelligent, fully automated greenhouse powered by sensors, logic, and a touch of brilliance._

![Smart Greenhouse](https://img.shields.io/badge/Project-Smart_Greenhouse-brightgreen?style=for-the-badge)  
![Automation](https://img.shields.io/badge/Automation-100%25-blue?style=for-the-badge)  

---

## 🌱 About the Project

Welcome to the future of sustainable gardening!  
This **Smart Greenhouse System** is a self-regulating ecosystem designed to monitor and optimize conditions for plant growth without human intervention.

Built with a blend of **embedded systems**, **sensors**, and **automation logic**, the system manages temperature, humidity, soil moisture, and lighting — ensuring ideal conditions around the clock.

---

## 🧠 Features at a Glance

🔹 **🌡️ Temperature & Humidity Control**  
– Uses the **DHT22 sensor** to maintain an optimal growing climate.  

🔹 **💧 Automated Irrigation System**  
– Soil moisture sensor (potentiometer) detects dryness and triggers a **DC pump** via **relay** to water the plants.  

🔹 **🌞 Adaptive Lighting**  
– A light sensor detects darkness and activates **3 synchronized LEDs** to ensure your plants never miss the sun.  

🔹 **🧠 Intelligent Automation**  
– Smart logic ensures water and light are only used when truly necessary, saving energy and resources.

🔹 **📦 Test Case Coverage**  
– Built-in edge cases simulate real-world scenarios for reliability and robustness.

---

## 📡 Why ESP32?

The **ESP32** is the brain of the system — a powerful, low-cost microcontroller with built-in **Wi-Fi & Bluetooth**, ideal for IoT and embedded automation projects.

### Key Benefits:
- 🔧 **Dual-core processing** for multitasking sensor readings and automation logic.
- 📶 **Wi-Fi-ready**, enabling future upgrades like remote control and monitoring.
- ⚡ **Low power consumption**, perfect for always-on systems.
- 🧠 **Library-rich ecosystem** for seamless integration with sensors and relays.

> The ESP32 is not just a controller — it's the **smart gardener** of this greenhouse! 🌱💡

---

## 🌐 Real-Time Web Monitoring (ESP32 Web Server)

To make the greenhouse truly *smart*, this project includes a **local web server** hosted directly on the ESP32, enabling you to:

- 🖥️ Monitor live sensor data (temperature, humidity, soil moisture, light intensity)
- 📡 Access it via any browser-connected device within the same Wi-Fi network
- ⚡ Stay fully offline — no need for third-party cloud services

### 🧪 How it works:
- The ESP32 connects to your home Wi-Fi and launches a web server.
- A clean, responsive web dashboard displays real-time sensor values.
- Accessible on phones, laptops, and even smart TVs!

> 🌍 _Just enter the ESP32’s local IP in your browser — and monitor your mini-jungle from anywhere at home!_

---

## 🛠️ Tech Stack & Hardware

| Component               | Description                                           |
|------------------------|-------------------------------------------------------|
| 🌡️ DHT22 Sensor         | Monitors temperature & humidity                       |
| 💧 Soil Moisture Sensor | Detects soil moisture level                          |
| 🔆 Light Sensor         | Detects ambient brightness                           |
| 💡 LEDs (x3)            | Provide artificial light (controlled together)       |
| 🚿 DC Water Pump        | Mist plants with relay-controlled automation         |
| ⚡ Relay Module         | Safely switches pump on/off                          |
| 🤖 ESP32                | Central controller, Wi-Fi enabled                     |

---

## 📸 Images & Videos

> _A sneak peek into the green brilliance – see the system grow, water, and glow in action!_ 🌿🎥

### 🖼️ Project Setup
![Greenhouse Setup](images/greenhouse_setup.jpg)

### 💧 Watering Demo
[![Irrigation Demo](images/pump_thumbnail.jpg)](https://www.youtube.com/watch?v=YOUR_VIDEO_LINK)

> _Click to view the video on YouTube_ 🔗

---

## 🤝 Contributing

Got suggestions? Spotted a bug? Want to improve the system?  
You're welcome to **fork**, **contribute**, or **open issues**!

---

## ❤️ Credits

This project is created with love and passion by **B Saran**.

---

