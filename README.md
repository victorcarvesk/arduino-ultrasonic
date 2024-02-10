# Ultrasonic (HC-SR04)

[![Licence](https://img.shields.io/badge/License-MIT-green.svg)](./LICENSE)

This library provides an easy-to-use interface for controlling Ultrasonic (HC-SR04) sensor.


## Installation

1. Download this repository as ZIP.
2. Open the Arduino IDE.
3. Go to `Sketch → Include Library → Add .ZIP Library...`.
4. Select the downloaded ZIP file and click `Open`.
5. The library is now installed.


## Usage

1. Include the library into your project via Arduino IDE `Sketch → Include Library → Ultrasonic` or just add the following line in your code: 
```cpp
#include <Ultrasonic.h>
```
2. Then create an instance of the Ultrasonic:
```cpp
Ultrasonic ultrasonic(trigger_pin, echo_pin);
```

## Examples
Go to `File → Examples → Ultrasonic → Ultrasonic`
```cpp
#include "Ultrasonic.h"

#define trigger_pin 5
#define echo_pin 18

Ultrasonic ultrasonic(trigger_pin, echo_pin);

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Distance (cm): ");
  Serial.println(ultrasonic.measureCentimeters());
  delay(1000);
}
```


## Methods

| Method                 | Params | Description
| :--------------------- | :----- | :----------
| **measureCentimeters** | none   | measures distance in centimeters
| **measureInchs**       | none   | measures distance in inchs

## License
This project is licensed under the [MIT license](./LICENSE).
