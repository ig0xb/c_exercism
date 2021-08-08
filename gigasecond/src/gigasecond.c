#include "gigasecond.h"

time_t gigasecond_after(time_t t) {
    return t + pow(10, 9);
}