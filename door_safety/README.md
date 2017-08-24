# Door Safety System

## Requirements

| Equipment | Quantity |
|---|:-:|
| 16x2 LCD Display + I2C Converter  | 1 |
| Bread Board  | 1  |
| Arduino Uno  | 1  |
| Wires  |   |
| RFID Modulu  |  1 |
| LED |  2 |

## Set Up

1. RFID-RC522 Module Connection
    
    | Pin Name | Pin Number |
    |---|:-:|
    | Reset    |     Pin 5 |
    | SDA      |     Pin 10|
    | MOSI     |     Pin 11|
    | MISO     |     Pin 12|
    | SCK      |     Pin 13|
    | Ground   |     Ground|
    | 3.3 V    |     3.3 V|

2. I2C Converter Module Connection
    
    | Pin Name | Pin Number |
    |---|:-:|
    | VCC      |    5 V |
    | Ground   |    Ground|
    | SDA      |    A4|
    | SCL      |    A5|
    
    P.S. : 16x2 LCD Display module has a I2C converter. 

3. Buzzer Connection
    
    | Pin Name | Pin Number |
    |---|:-:|
    | +        |    Pin 2|
    | -        |    Ground|

4. LED Connection
    
    | Pin Name | Pin Number |
    |---|:-:|
    | +        |    Pin 3|
    | -        |    Ground|
    
    | Pin Name | Pin Number |
    |---|:-:|
    | +        |    Pin 4|
    | -        |    Ground|

P.S. : The latest version of the project is in media folder as a Fritzing Project.