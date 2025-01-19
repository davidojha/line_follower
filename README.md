# Line Follower Robot

This repository contains the implementation and resources for a Line Follower Robot project. The robot is programmed to follow a black line on a white surface using infrared (IR) sensors. It is designed for beginners and hobbyists to learn robotics, Arduino programming, and circuit design.

## Features
- Automatically follows a line on a track.
- Easy to build and program using Arduino.
- Compact design with minimal components.

## Components
1. Arduino Nano (or any compatible microcontroller)
2. L298N Motor Driver
3. Two IR Sensors
4. Two DC Geared Motors
5. Two 3.7V Li-ion Batteries
6. Wheels and a chassis
7. Breadboard and jumper wires

## Circuit Diagram
The circuit uses IR sensors to detect the line and an L298N motor driver to control the motors. The sensors send data to the Arduino, which adjusts the motor speed to keep the robot on track

## Code
The Arduino code is included below and in the repository. The program reads sensor values, processes them, and controls the motors accordingly.
