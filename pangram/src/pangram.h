#ifndef PANGRAM_H
#define PANGRAM_H

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool is_pangram(const char* sentence);

typedef struct letter_count {
    char letter;
    int  count;
} letter_count_t;

void letter_count(const char* input, letter_count_t* letters);
void initialize_letters(letter_count_t* letters);
#endif
