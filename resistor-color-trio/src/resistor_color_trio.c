#include "resistor_color_trio.h"

resistor_value_t color_code(resistor_band_t* colors) {
    resistor_value_t val = {
        (10 * colors[0] + colors[1]),
        OHMS};

    if (colors[2] > 0) {
        uint16_t zeros = colors[2] % 3;
        for (uint16_t i = 0; i < zeros; i++) {
            val.value *= 10U;
        }

        if (colors[2] > 2) {
            val.unit = KILOOHMS;
        }
    }
    if (val.value % 1000U == 0) {
        val.value /= 1000U;
        val.unit = KILOOHMS;
    }

    //   static resistor_value_t p;
    //   p.value = (colors[0]*10 + colors[1])*pow(10, colors[2]);
    //   if (p.value < 1000)
    //     p.unit = OHMS;
    //   else {
    //     p.unit = KILOOHMS;
    //     p.value /= 1000;
    //   }
    //   return p;

    return val;
}