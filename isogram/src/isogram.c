#include "isogram.h"
bool is_isogram(const char phrase[]) {
    // if (phrase == NULL)
    //     return false;
    if (!phrase) {
        return false;
    }

    for (size_t i = 0; i < strlen(phrase); i++) {
        for (size_t j = i + 1; j < strlen(phrase); j++) {
            if (isalpha(phrase[i]) && tolower(phrase[i]) == tolower(phrase[j])) {
                return false;
            }
        }
    }

    return true;
}