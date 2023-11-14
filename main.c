#include <periph/gpio.h>
#include <xtimer.h>
#include <board.h>
#include <stdio.h>



int main(void) {

    while(1) {
        gpio_toggle(LED3_PIN);


        xtimer_msleep(1000);
    }

    return 0;
}