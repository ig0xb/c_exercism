#include "acronym.h"

char* abbreviate(const char* phrase) {

    if (!phrase || strlen(phrase) == 0)
        return NULL;

    char* acr = malloc(strlen(phrase) + 1);
    sprintf(acr, "%c", phrase[0]);
    size_t len = strlen(phrase);
    for (size_t i = 1; i < len - 1; i++) {
        if (!isalpha(phrase[i]) && phrase[i] != '\'') {
            if (isalpha(phrase[i + 1])) {
                char tempstr[2];
                tempstr[0] = toupper(phrase[i + 1]);
                tempstr[1] = '\0';
                strncat(acr, tempstr, 1);
            }
        }
    }

    return acr;
}