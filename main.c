/* DriverLib Includes */
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

/* Standard Includes */
#include <stdint.h>
#include <stdbool.h>

/* Predefined values for LEDs */
#define LED2_GREEN_PORT     GPIO_PORT_P2
#define LED2_GREEN_PIN      GPIO_PIN1

#define LED2_BLUE_PORT      GPIO_PORT_P2
#define LED2_BLUE_PIN       GPIO_PIN2

/* Predefined values for Buttons */
#define S1_PORT             GPIO_PORT_P1
#define S1_PIN              GPIO_PIN1

#define S2_PORT             GPIO_PORT_P1
#define S2_PIN              GPIO_PIN4

#define PRESSED             0
#define RELEASED            1

int main(void)
{
    /* Stop Watchdog */
    WDT_A_holdTimer();

    while(1)
    {
        
    }
}
