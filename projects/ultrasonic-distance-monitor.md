# ESP32 Ultrasonic Distance Monitor

Use an HC-SR04 ultrasonic sensor to measure distance with an ESP32.

## Typical Connections

| HC-SR04 | ESP32 |
|---|---|
| VCC | 5V supply |
| GND | GND |
| TRIG | GPIO output |
| ECHO | GPIO input* |

*Check voltage compatibility for your board. The HC-SR04 echo signal can be 5V, while ESP32 GPIO logic is generally 3.3V. Use appropriate level shifting or a voltage divider where required.

## Applications

- Obstacle detection
- Smart dustbins
- Parking distance indicators
- Robotics
- Object measurement
