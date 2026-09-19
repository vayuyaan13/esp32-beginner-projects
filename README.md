# ESP32 Beginner Projects

A practical collection of beginner-friendly ESP32 projects, Arduino IDE examples, GPIO tutorials, Wi-Fi experiments, sensor projects, and IoT ideas.

This repository is designed for students, hobbyists, makers, and anyone getting started with ESP32 development.

## What You Will Learn

- Set up an ESP32 with Arduino IDE
- Work with GPIO input and output
- Read digital sensors
- Control LEDs and simple actuators
- Connect ESP32 to Wi-Fi
- Build small IoT projects
- Troubleshoot common ESP32 setup problems

## ESP32 Setup

### Install Arduino IDE

Download Arduino IDE from:

https://www.arduino.cc/en/software

Then install ESP32 board support and select your board under **Tools → Board**.

Arduino-ESP32 documentation:

https://docs.espressif.com/projects/arduino-esp32/en/latest/

## First ESP32 Program: Blink an LED

~~~cpp
const int LED_PIN = 2;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
~~~

GPIO 2 is common on many ESP32 development boards, but the onboard LED pin can vary by board.

## Read a Digital Sensor

~~~cpp
const int SENSOR_PIN = 4;

void setup() {
  Serial.begin(115200);
  pinMode(SENSOR_PIN, INPUT);
}

void loop() {
  int sensorState = digitalRead(SENSOR_PIN);

  if (sensorState == HIGH) {
    Serial.println("Sensor is HIGH");
  } else {
    Serial.println("Sensor is LOW");
  }

  delay(500);
}
~~~

Use the sensor manufacturer's wiring and voltage requirements for your module.

## Connect ESP32 to Wi-Fi

~~~cpp
#include <WiFi.h>

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  Serial.print("Connecting");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("Wi-Fi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
}
~~~

**Important:** Never commit real Wi-Fi passwords, API keys, tokens, or other secrets to a public repository.

## Beginner ESP32 Project Ideas

### 1. ESP32 Weather Station

Read temperature and humidity and optionally show the data on an OLED display or a web dashboard.

### 2. Wi-Fi Controlled LED

Create a simple web interface hosted by the ESP32 and use it to control an LED.

### 3. ESP32 Web Server

Serve a small local web page directly from the ESP32 for sensor monitoring or GPIO control.

### 4. Ultrasonic Distance Monitor

Use an HC-SR04 ultrasonic sensor for distance measurement, obstacle detection, robotics, or smart-bin projects.

### 5. Smart Home Sensor

Combine the ESP32 with motion, temperature, light, or door sensors.

### 6. RFID Access Project

Connect an RFID reader to the ESP32 and build a basic tag-reading or access-control prototype.

## Suggested Repository Structure

~~~text
esp32-beginner-projects/
├── README.md
├── code/
│   ├── blink-led.ino
│   ├── digital-sensor.ino
│   └── wifi-connect.ino
├── projects/
│   ├── esp32-weather-station.md
│   ├── wifi-controlled-led.md
│   ├── esp32-web-server.md
│   └── ultrasonic-distance-monitor.md
└── LICENSE
~~~

## Troubleshooting

### ESP32 Board Does Not Appear

Check the USB cable, required USB driver, selected board, and selected serial port.

### Upload Gets Stuck

Some ESP32 boards require the **BOOT** button to be held while the upload starts. The exact method depends on the board.

### Serial Monitor Shows Garbled Text

Make sure the Serial Monitor baud rate matches your sketch, for example:

~~~cpp
Serial.begin(115200);
~~~

## Useful Resources

### Official Documentation

Espressif ESP-IDF:

https://docs.espressif.com/projects/esp-idf/en/latest/

Arduino-ESP32:

https://docs.espressif.com/projects/arduino-esp32/en/latest/

### Beginner Guide

For a beginner-focused introduction to the ESP32 development board:

**Getting Started with ESP32 Development Board**  
https://vayuyaan.com/blog/getting-started-with-esp32-development-board/

The guide covers ESP32 basics, board features, setup, and common development uses.

## Contributing

Suggestions, corrections, project examples, and improvements are welcome.

When contributing:

1. Keep examples beginner-friendly.
2. Explain hardware and wiring.
3. Never commit credentials or secrets.
4. Test code before submitting changes.
5. Explain what the example demonstrates.

## License

This repository is intended as an educational collection of ESP32 examples and project notes.
