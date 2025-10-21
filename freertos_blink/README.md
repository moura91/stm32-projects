# FreeRTOS Blink


### Description
This project demonstrates how to configure and use **FreeRTOS** on an **STM32 microcontroller**.
The goal is to control an onboard LED using **two separate threads (tasks)** with **different priorities**, allowing observation of the LED behavior as the scheduler alternates between them.
This project is done using the STM32CubeIDE.

### Hardware
- **Board:** Nucleo-F446RE
- **MCU:** STM32F446R
- **Components used:** Nunchuk joystick white; onboard Green LED (LD2)

### Tools & Environment
- **IDE:** STM32CubeIDE 1.19.0
- **Firmware Package:** STM32CubeF4 v1.28.3 
- **Language:** C
- **HAL Drivers:** Yes

### Project Structure
freertos_blink/

├── Core/

│ ├── Inc/ → Header files

│ └── Src/ → Source files 

├── Drivers/ → HAL and CMSIS drivers 

├── freertos_blink.ioc → STM32CubeIDE configuration 

├── README.md → Project description 


### How It Works
1. Two FreeRTOS tasks are created: Blink01 and Blink02
2. Both tasks toggle the onboard Green LED
3. Each task runs with a different priority and delay time
   * Blink01: toggles every 500 ms
   * Blink02: toggles every 600 ms
4. The FreeRTOS scheduler manages when each task runs and the LED behavior depends on task priorities
  
  
### Main functions:
- **StartBlink01()** - task Blink01
- **StartBlink02()** - task Blink02
- **HAL_GPIO_TogglePin()** - toggles the LED state
  
## Build and Flash

To compile and flash using STM32CubeIDE:
1. Open the project folder (`dht11_sensor`) in STM32CubeIDE.
2. Build (`Ctrl + B`).
3. Flash the firmware (`Run` → `Run As` → `STM32 Cortex-M C/C++ Application`).

### Demo
![freertos_blink](images/freertos_blink.gif)

