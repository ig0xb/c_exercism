#include "darts.h"

uint8_t score(coordinate_t points) {
    float distance = sqrt(pow(points.x, 2) + pow(points.y, 2));
    if (distance <= 1)
        return 10U;
    else if (distance <= 5) {
        return 5U;
    } else if (distance <= 10) {
        return 1U;
    }
    return 0U;
}