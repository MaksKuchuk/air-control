#include <xtimer.h>
#include <board.h>
#include <stdio.h>
#include "ssd1306/ssd1306.h`"


int main(void) {
    ssd1306_Init();

    // ssd1306_Fill(Black);
    // ssd1306_SetCursor(5, 10);
    // ssd1306_WriteString("Hello world!", Font_11x18, White);
    // ssd1306_UpdateScreen();
    while(1) {
        // gpio_toggle(LED3_PIN);

        // printf("test");
        // // puts("test2");

        // // init_dht();

        // // int16_t v = get_temp();
        
        // // printf("%d", v);


        // xtimer_msleep(1000);
    }


    return 0;
}