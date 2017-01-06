# About 96Boards

96Boards is the first open specification to define a platform for the delivery of compatible, lowcost,
small footprint, 32-bit and 64-bit Cortex-A boards from a range of ARM SoC vendors.
Standardized expansion buses for peripheral I/O, display and cameras allow the hardware
ecosystem to develop a range of compatible add-on products that will work on any 96Boards
product over the lifetime of the platform.

http://www.96boards.org

# About Grove

Grove is a system for wiring up sensor and control modules using standardized connectors
and cables. It makes it easy to hook up any of the 100s of available Grove modules to a
microprocessor system without a messy tangle of wires. Each module provides a single
function, such as sensing temperature or driving an LCD.

http://www.seeed.cc/grove

# About the 96Boards Sensors Mezzanine Adapter

The 96Boards Sensors Mezzanine is an add-on board for any 96Boards compliant baseboard
including the HiKey from either CircuitCo or LeMaker, and the Qualcomm Dragonboard
410c. The Sensors mezzanine has connections for up to 18 digital, analog and i2c Grove
modules plus an on-board Arduino compatible microcontroller and shield connector.

https://www.96boards.org/products/mezzanine/sensors-mezzanine/

# About Linaro

Linaro’s mission is to bring together industry and the open source community to work on
key projects, deliver great tools, reduce industry wide fragmentation and redundant effort,
and provide common software foundations for all.

http://www.linaro.org

Updates may be made to this guide over time. You can download the most recent version of
this document from the sample code repository on GitHub: 
https://github.com/96boards/Starter_Kit_for_96Boards

Copyright (c) 2016 by Linaro, Ltd. This document is released under a Creative Commons
Attribution-ShareAlike 4.0 International License. 

***

# Table of Contents

- Included in this Kit
- Introduction to the 96Boards Sensors Mezzanine
- Setting up the Sensors Mezzanine
   - Step 1: Install Debian Operating System
   - Step 2: Attach Sensors Adapter
   - Step 3: Get a command prompt
   - Step 4: Connect to the Internet
   - Step 5: Update Debian
   - Step 6: Install extra tool packages
   - Step 7: Configure the software
- Using your Sensors Board
   - Using Baseboard I2C
   - Using Baseboard GPIO
   - Using ATMEGA IO
- Example Project - Hello World with the RGB LCD
- Example Project - Touch Sensor and Relay
- Example Project - Drive a Button and LED from the microcontroller
- Example Project - Buzzer and Light Sensor
- Example Project - Temperature and Humidity Display
- Example Project - Tweeting Doorbell
- Additional Resources
   - Design files
   - More Example Code
   - Examples from Other Kits

# Included in this Kit

## 96Boards Sensors Mezzanine

This is the adapter for connecting Grove modules to a 96Boards baseboard. It provides 18 Grove connectors, an Arduino compatible shield socket, and an ATMEGA328P microcontroller.

< insert image here >

## Grove Button Module (3.3V/5V)

This Grove module is a simple momentary on/off button. When pressed, it
pulls the data line up to VCC to output a HIGH signal. When released, the
data line drops down to output LOW.

< insert image here >

## Grove Touch Sensor Module (3.3V/5V)

A simple touch sensor that behaves in a similar fashion to the button.
Outputs high when touching the sensor with finger, and low otherwise.

< insert image here >

## Grove LED Socket Module (3.3V/5V)

An LED in Grove module form. Plug your favourite colour of LED into the
socket, and it will glow brightly when the signal line is driven HIGH.

< insert image here >

## Grove Buzzer Module (5V only)

This module is a piezo buzzer that will emit a tone when the data line is
driven HIGH, or can be made to play notes and effects by connecting it to a
pulse-width modulation (PWM) output.

< insert image here >

## Grove Rotary Angle Sensor Module (3.3V/5V)

This Grove module outputs an analog signal between 0V and VCC based on
the position of the potentiometer. It has an angular range of 300 degrees.

< insert image here >

## Grove Sound Sensor (5V only)

This is a sound sensing module with a simple microphone. It can be used to
detect the volume of sound in the area. The resistance of the sensor
decreases as the level of sound increases.

< insert image here >

## Grove Light Sensor (3.3V/5V)

This module detects the intensity of light shining on the sensor. The
resistance of the sensor decreases as the amount of illumination increases.

< insert image here >

## Grove Servo (5V only)

The Grove servo is an actuator that is controlled by a PWM signal. The angle
of the servo can be adjusted by changing the pulse width of the input PWM
signal.

< insert image here >

## Grove Relay (3.3V/5V)

The Grove Relay has a normally-open SPST relay that is controlled
by a single digital pin. It can be used to control power at much
higher voltages that the Sensors mezzanine can handle. When the
signal is LOW the relay is open. When it is driven HIGH the relay
will close.
Use it to control lights and equipment at up to 250V at 10 amps,
but be careful when working with mains voltages.

< insert image here >

## Grove Temperature and Humidity Sensor (3.3V/5V)

This Grove module is a high accuracy temperature and humidity
sensor.

< insert image here >


## Grove RGB Backlight LCD (5V only)

This is a great little display module that is easy to control. It is a
16x2 character display with an RGB backlight controller so you can
set it to whatever colour you like. This module is controlled using
the I2C bus.

< insert image here >

# Introduction to the 96Boards Sensors Mezzanine

The 96Boards Sensors Mezzanine board included in this kit is an IO adapter for connecting
sensors, actuators and other devices to any 96Boards baseboard. The Sensors mezzanine
has exactly the same footprint as a standard size 96Boards Consumer Edition baseboard and
fits perfectly on top. Sensors and other devices are connected to the board via 4 pin Grove
connectors or via the Arduino compatible shield socket.
Additionally, the Sensors mezzanine has a USB to UART adapter for accessing the 96Boards
UART console.

**Features**

< insert image here >

1. Low Speed Expansion connector
2. USB UART console connector
3. Reset and Power buttons
4. 5V I2C Grove connectors
5.  5V GPIO Grove connector
6. 3.3V I2C Grove connectors
7. 3.3V GPIO Grove connectors
8. ATMEGA D3-D7 Grove connectors
9. ATMEGA A0-A2 Grove connectors
10. ATMEGA I2C Grove connector
11. ATMEGA Arduino compatible socket
12. ATMEGA Reset and Power LEDs

# Setting up the Sensors Mezzanine












