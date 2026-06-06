# 🚮 Smart Dustbin Using Arduino Uno

An Arduino-based Smart Dustbin that automatically opens its lid when a user approaches and closes it after a few seconds. This touchless system improves hygiene and provides a simple introduction to automation using sensors and actuators.

## 📌 Features

- Automatic lid opening and closing
- Touchless waste disposal
- Uses ultrasonic distance sensing
- Low-cost and easy to build
- Suitable for home, office, school, and public use

## 🛠 Components Used

| Component | Quantity |
|------------|------------|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| SG90 Servo Motor | 1 |
| Jumper Wires | As Required |
| Breadboard (Optional) | 1 |
| Dustbin with Lid | 1 |
| USB Cable/Power Supply | 1 |

## 🔌 Circuit Connections

### Ultrasonic Sensor (HC-SR04)

| HC-SR04 Pin | Arduino Uno Pin |
|-------------|----------------|
| VCC | 5V |
| GND | GND |
| Trig | D9 |
| Echo | D10 |

### Servo Motor

| Servo Pin | Arduino Uno Pin |
|-----------|----------------|
| VCC | 5V |
| GND | GND |
| Signal | D6 |

## ⚙️ Working

1. The ultrasonic sensor continuously measures the distance of nearby objects.
2. When an object is detected within a specified range (e.g., 20 cm), the Arduino sends a signal to the servo motor.
3. The servo motor opens the dustbin lid automatically.
4. After a short delay, the lid closes.
5. The system keeps monitoring for the next user.

## 🎯 Applications

- Smart Homes
- Offices
- Schools and Colleges
- Hospitals
- Public Areas
- Smart City Solutions

## ✅ Advantages

- Hygienic operation
- Easy to use
- Low maintenance
- Cost-effective
- Portable design

## 🔮 Future Improvements

- Dustbin level monitoring
- IoT-based monitoring system
- Mobile application integration
- Automatic waste segregation
- Notification when the dustbin is full
