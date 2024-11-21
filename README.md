# Free Parking Space Navigator

Welcome to the Free Parking Space Navigator project! This project aims to create a simple and efficient system to detect and indicate available parking spaces using an Arduino, LED indicators, and ultrasonic sensors.

## Table of Contents
- Introduction
- Components
- Circuit Diagram
- Installation
- Usage
- Contributing


## Introduction
The Free Parking Space Navigator is designed to help drivers easily find available parking spots. The system uses ultrasonic sensors to detect the presence of a vehicle in a parking space and LED indicators to show the availability status. The Arduino microcontroller processes the sensor data and controls the LEDs accordingly.

## Components
- Arduino Uno
- Ultrasonic Sensors (HC-SR04)
- LEDs (Red and Green)  ## red light can be used to indicate that parking is full or it's under the procees
- Resistors (220 ohm)  (optional)
- Breadboard and Jumper Wires
- Power Supply

## Circuit Diagram
https://www.tinkercad.com/things/3LlaogMLNQC-parklight-navigator

## Installation
1. Clone this repository:
    ```
    https://github.com/Electroboxer/ParkLight-Navigator
    ```
2. Open the project in the Arduino IDE.
3. Connect the components as per the circuit diagram.
4. Upload the `ParkLight_Navigator.ino` code to your Arduino Uno.

## Usage
1. Power up the Arduino.
2. The ultrasonic sensors will start detecting the presence of vehicles.
3. The LEDs will indicate the status of each parking space:
    - **Green LED**: Parking space is available.
    - **No light**: Parking space is occupied.
    - **Varible brightnesss change**: Parking process is going on

## Contributing
Contributions are welcome! Please fork this repository and submit a pull request with your improvements.


---

Feel free to customize this README to better fit your project's specifics. If you need any more help, just let me know!
