#include <xtimer.h>
#include <board.h>
#include <stdio.h>
#include <periph/gpio.h>
#include "dht_sensor.h"


int main(void) {
    while(1) {
        gpio_toggle(LED3_PIN);

        printf("test");
        puts("test2");

        // init_dht();

        // int16_t v = get_temp();
        
        // printf("%d", v);


        xtimer_msleep(1000);
    }


    return 0;
}