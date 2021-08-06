#include "resistor_color.h"

uint16_t color_code(resistor_band_t code) {
    return code;
}

resistor_band_t* colors(void) {
    static resistor_band_t arr[WHITE + 1];
    for (uint16_t i = BLACK; i <= WHITE; i++) {
        arr[i] = i;
    }

    return arr;
}