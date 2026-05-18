# Real-Time ECG Monitoring System
**Final Year Project Report**

## 1. Abstract
This project describes the design and implementation of a low-cost, portable, Real-Time ECG Monitoring System. By utilizing the AD8232 ECG sensor module and the ESP8266 NodeMCU micro-controller, cardiac electrical activity is captured and transmitted wirelessly. The system provides immediate visualization of ECG waveforms for remote health tracking.

## 2. Hardware Architecture
The system hardware consists of two main components:
*   **AD8232 Sensor Module:** An integrated signal conditioning block for ECG and other biopotential measurement applications designed to extract, amplify, and filter small biopotential signals in the presence of noisy conditions.
*   **ESP8266 NodeMCU (ESP-12E):** A Wi-Fi enabled micro-controller responsible for analog-to-digital conversion (ADC) of the sensor data and handling wireless data protocols.

## 3. Software & Data Flow
1.  The AD8232 outputs an analog signal representing the heart's electrical activity.
2.  The ESP8266 reads this signal via its analog pin (A0) at a sampled frequency.
3.  The data is processed locally and streamed over the Arduino IDE Serial Plotter for real-time waveform visualization.
