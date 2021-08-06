#include "armstrong_numbers.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_armstrong_number(int candidate) {
    int  sum = 0;
    int  n = candidate;
    char nStr[20];
    sprintf(nStr, "%d", candidate);
    size_t nDigits = strlen(nStr);
    while (n > 10) {
        int temp = n % 10;
        sum += pow(temp, nDigits);
        n /= 10;
    }
    sum += pow(n, nDigits);

    return candidate == sum;
}
