#include "dht.h"
#include "dht_params.h"
#include "fmt.h"

#define UNUSED(x) (void)(x)

static dht_t dht_dev;

int init_dht(void) {
    dht_params_t my_params;
    my_params.pin = DHT11_PIN;
    my_params.in_mode = DHT_PARAM_PULL;

    dht_t dev;
    if (dht_init(&dev, &my_params) == DHT_OK) {
        printf("DHT sensor connected\n");
    }
    else {
        printf("Failed to connect to DHT sensor\n");
        return 1;
    }

    dht_dev = dev;

    return 0;
}

int get_temp(char* v) {
    UNUSED(v);

    int16_t temp, hum;
    if (dht_read(&dht_dev, &temp, &hum) != DHT_OK) {
        printf("Error reading values\n");
        return 1;
    }

    char temp_s[10];
    size_t n = fmt_s16_dfp(temp_s, temp, -1);
    temp_s[n] = '\0';

    v = temp_s;

    return 0;
}

int get_hum(char* v) {
    UNUSED(v);

    int16_t temp, hum;
    if (dht_read(&dht_dev, &temp, &hum) != DHT_OK) {
        printf("Error reading values\n");
        return 1;
    }

    char hum_s[10];
    size_t n = fmt_s16_dfp(hum_s, hum, -1);
    hum_s[n] = '\0';

    v = hum_s;

    return 0;
}