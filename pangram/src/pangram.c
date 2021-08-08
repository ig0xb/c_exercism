#include "pangram.h"

bool is_pangram(const char* sentence) {
    if (!sentence) {
        return false;
    }

    letter_count_t letters[26];

    initialize_letters(letters);
    letter_count(sentence, letters);

    for (size_t i = 0; i < 26; i++) {
        if (letters[i].count == 0) {
            return false;
        }
    }

    return true;
}

void letter_count(const char* input, letter_count_t* letters) {
    for (size_t i = 0; i < strlen(input); i++) {
        for (size_t k = 0; k < 26; k++) {
            if (letters[k].letter == tolower(input[i])) {
                letters[k].count++;
                break;
            }
        }
    }
}

void initialize_letters(letter_count_t* letters) {
    char   c;
    size_t i;
    for (c = 'a', i = 0; c <= 'z'; ++c, i++) {
        letters[i].letter = c;
        letters[i].count = 0;
    }
}

// bool is_pangram(const char* sentence) {
//     bool sentence_contains[26] = {false};

//     if (sentence == NULL) return false;

//     for (int i = 0; sentence[i]; i++) {
//         int index = tolower(sentence[i]) - 'a';

//         if (!isalpha(sentence[i])) continue;

//         if (sentence_contains[index] != true) sentence_contains[index] = true;
//     }

//     for (int i = 0; i < 26; i++) {
//         if (!sentence_contains[i]) return false;
//     }

//     return true;
// }