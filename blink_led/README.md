# Blink LED

### Description
The goal of this project is to make the onboard green LED (LD2) blink continuously using a delay loop.
This basic example demonstrates GPIO configuration and toggling on the STM32 Nucleo board.

### Hardware
- **Board:** Nucleo-F446RE
- **MCU:** STM32F446RETx
- **Onboard components used:** Green LED (LD2)

### Tools & Environment
- **IDE:** STM32CubeIDE 1.16.1
- **Firmware Package:** STM32CubeF4 v1.28.0 
- **Language:** C
- **HAL Drivers:** Yes

### Project Structure
blink_led/

├── Core/

│ ├── Inc/ → Header files

│ └── Src/ → Source files

├── Drivers/ → HAL and CMSIS drivers

├── blink_led.ioc → STM32CubeMX configuration

├── README.md → Project description

### How It Works
1. GPIO pin connected to the green LED (LD2) is configured as output.  
2. The program continuously toggles the LED state inside an infinite loop.  
3. A small delay is added between toggles to make the blinking visible.

### Demo
TBD

