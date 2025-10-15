# Blink LED

### Description
The goal of this project is to control the brightness of the onboard green LED using **PWM**.
This project is done using the STM32CubeIDE and a STM32 Nucleo board.

### Hardware
- **Board:** Nucleo-F446RE
- **MCU:** STM32F446R
- **Onboard components used:** Green LED (LD2)

### Tools & Environment
- **IDE:** STM32CubeIDE 1.19.0
- **Firmware Package:** STM32CubeF4 v1.28.3 
- **Language:** C
- **HAL Drivers:** Yes

### Project Structure
pwm_led/

├── Core/

│ ├── Inc/ → Header files

│ └── Src/ → Source files 

├── Drivers/ → HAL and CMSIS drivers 

├── pwm_led.ioc → STM32CubeIDE configuration 

├── README.md → Project description 


### How It Works
The project initializes a **PWM output** on the GPIO connected to the onboard green LED (LD2), using TIM2.
By changing the **duty-cycle**, the LED brightness varies smoothly.

### Demo
![PWM LED Demo](images/pwm_led.gif)
