#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
    switch (planet) {
    case 0:
        return seconds / (0.2408467 * EARTHSECONDS);
        break;
    case 1:
        return seconds / (0.61519726 * EARTHSECONDS);
        break;
    case 2:
        return seconds / (1.0 * EARTHSECONDS);
        break;
    case 3:
        return seconds / (1.8808158 * EARTHSECONDS);
        break;
    case 4:
        return seconds / (11.862615 * EARTHSECONDS);
        break;
    case 5:
        return seconds / (29.447498 * EARTHSECONDS);
        break;
    case 6:
        return seconds / (84.016846 * EARTHSECONDS);
        break;
    case 7:
        return seconds / (164.79132 * EARTHSECONDS);
        break;
    default:
        return seconds / 1.0;
        break;
    }
}
