#include <stdio.h>
#include "pico/stdlib.h"

int main(){
   const uint LED_PIN = 27;
   gpio_init(LED_PIN);
   gpio_set_dir(LED_PIN, GPIO_OUT);

   while (true) {
    gpio_put(LED_PIN, 1);
    sleep_ms(500);
    gpio_put(LED_PIN, 0);
    sleep_ms(500);
   }    
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    const uint BOTON_PIN = 8;
    gpio_init(BOTON_PIN);
    gpio_set_dir(BOTON_PIN, GPIO_IN);
    int BOTON_VALUE = 0;
    while (true) {
        BOTON_VALUE = gpio_get(BOTON_PIN);
        if(BOTON_VALUE == 1) {
        gpio_put(LED_PIN, 1);
        }
        else{
            gpio_put(LED_PIN, 0);
        }
    }
}