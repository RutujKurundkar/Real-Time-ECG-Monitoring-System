# Real-Time ECG Monitoring System

## Overview

The Real-Time ECG Monitoring System is designed to acquire and visualize electrical activity of the human heart using the AD8232 ECG sensor module and ESP8266 microcontroller. The system captures ECG signals through electrodes attached to the body and displays the waveform in real time using the Arduino IDE Serial Plotter.

This project demonstrates biomedical signal acquisition, signal conditioning, and real-time waveform monitoring using embedded systems. The system helps in understanding ECG waveform components such as P wave, Q wave, R wave, and S wave.

---

## Features

- Real-time ECG signal acquisition
- ECG waveform visualization using Serial Plotter
- AD8232 based ECG signal sensing
- ESP8266 microcontroller interfacing
- Continuous ECG signal monitoring
- Biomedical signal processing demonstration

---

## Technologies Used

- ESP8266 Microcontroller
- AD8232 ECG Sensor Module
- Arduino IDE
- Embedded C Programming
- Arduino Serial Plotter

---

## Components Required

| Component | Quantity |
|---|---|
| ESP8266 | 1 |
| AD8232 ECG Module | 1 |
| Ag/AgCl Electrodes | 3 |
| Breadboard | 1 |
| Jumper Wires | Multiple |
| USB Cable | 1 |

---

## Working Principle

1. ECG electrodes are attached to the human body to detect electrical activity of the heart.
2. The AD8232 module acquires and conditions the ECG signal.
3. The ESP8266 reads the analog ECG signal from the sensor module.
4. The ECG data is transmitted to the Arduino IDE Serial Plotter.
5. The ECG waveform is displayed in real time for monitoring and observation.

---

## ECG Waveform Results

### ECG Waveform

![ECG Waveform](results/ECG%20Waveform.png)

### P Wave

![P Wave](results/P%20Wave.png)

### Q Wave

![Q Wave](results/Q%20Wave.png)

### R Wave

![R Wave](results/R%20Wave.png)

### S Wave

![S Wave](results/S%20Wave.png)

---

## Hardware Setup

![Hardware Setup](media/setup_photo.jpg)

---

## Installation and Setup

```bash
git clone https://github.com/RutujKurundkar/Real-Time-ECG-Monitoring-System.git
cd Real-Time-ECG-Monitoring-System
```

### Steps

1. Connect the AD8232 module to ESP8266.
2. Attach ECG electrodes properly.
3. Upload the Arduino code using Arduino IDE.
4. Open Arduino Serial Plotter.
5. Observe the ECG waveform in real time.

---

## Project Structure

```text
Real-Time-ECG-Monitoring-System/
│
├── docs/
├── hardware/
├── software/
├── results/
└── media/
```

---

## Applications

- Biomedical signal monitoring
- Educational ECG analysis
- Embedded biomedical systems
- Real-time physiological signal visualization
- Healthcare technology learning

---

## Future Improvements

- Heart rate calculation
- Wireless ECG data transmission
- Mobile application integration
- Noise reduction optimization
- Cloud-based ECG monitoring

---

## Project Demonstration

The system successfully acquires and displays ECG waveforms in real time using the Arduino IDE Serial Plotter.

---

## Author

### Rutuj Kurundkar

GitHub:
https://github.com/RutujKurundkar

---

## License

This project is developed for educational purposes under the MIT License.
