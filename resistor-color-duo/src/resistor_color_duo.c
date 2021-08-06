#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t* colors) {

    char first[2];
    char second[2];
    sprintf(first, "%d", colors[0]);
    sprintf(second, "%d", colors[1]);

    return atoi(strcat(first, second));
    // return (10 * colors[0] + colors[1]);
}
