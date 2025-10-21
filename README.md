# STM32 Embedded Projects Portfolio

This repository contains a collection of small embedded systems projects developed using the **Nucleo-F446RE (STM32)** board.  
The goal is to consolidate my knowledge in **embedded software and hardware** through hands-on, self-learning projects.


---

## About Me
I’m a hardware engineer currently focused on strengthening my skills in embedded systems using STM32 microcontrollers.  


---

## Projects

| Project | Description | Technologies |
|----------|--------------|---------------|
| [Blink LED](./blink_led) | First GPIO test and delay handling | GPIO, HAL, Delay |
| [PWM LED](./pwm_led) | Control the onboard Green LED using PWM | GPIO, HAL, Timer, PWM |
| [GPIO Input Button](./gpio_input_button) | Onboard blue button configured as a digital input - pressing it turns on the green LED. | GPIO, HAL |
| [Interrupt Button](./interrupt_button) | Onboard blue button configured as an external interrupt - toggles the green LED on each press | GPIO, HAL, EXTI |
| [ADC Potentiometer](./adc_potentiometer) | Potentiometer analog input reading and adjust the green LED brightness according | GPIO, HAL, ADC |
| [DHT11 Sensor Reading](./dht11_sensor) | Temperature & humidity reading via 1-wire protocol w/o libraries | GPIO, Timing, UART |
| [Nunchuk I2C](./i2c_nunchuk) | Nunchuk I2C reading - sends the Nunchuk joysick positions and controls the green LED PWM according to the button selection | I2C, Timer, UART |
| [FreeRTOS blink](./freertos_blink) | Use FreeRTOS to control two tasks responsible for the LED blink | FreeRTOS, HAL, Timer |


---

## Tools
- **STM32CubeIDE**
- **HAL Drivers**


---

## Next Steps
- Send data to a server
- Final project


---

**Contact:** [LinkedIn] (https://www.linkedin.com/in/tiagosm)
