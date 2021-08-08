#include "word_count.h"

void string_tolower(char* s) {
    for (; *s != '\0'; s++) {
        *s = tolower(*s);
    }
}

void string_trim_punct(char* s) {
    int len = strlen(s);
    int i = 0;
    for (; s[i] != '\0' && !(isalnum(s[i])); i++)
        ;

    if (i > 0) {
        memmove(&s[0], &s[i], len - i);
    }

    for (; len >= 0; len--) {
        if (isalnum(s[len])) {
            return;
        }
        s[len] = '\0';
    }
}

int count_words(const char* sentence, word_count_word_t* words) {
    size_t      i = 0;
    size_t      count = 0;
    const char* DELIM = " ,\n";
    char*       input = malloc(strlen(sentence) + 1);
    strcpy(input, sentence);

    char* wordArr[MAX_WORDS + 1];
    for (char* word = strtok(input, DELIM); word != NULL; word = strtok(NULL, DELIM)) {
        string_tolower(word);
        string_trim_punct(word);
        wordArr[i] = word;
        i++;
    }

    for (size_t j = 0; j < i; j++) {
        bool found = false;
        for (size_t k = 0; k < count; k++) {
            if (strcmp(words[k].text, wordArr[j]) == 0) {
                found = true;
                words[k].count++;
                break;
            }
        }
        if (!found) {
            if (strlen(wordArr[j]) != 0) {
                strcpy(words[count].text, wordArr[j]);
                words[count].count++;
                count++;
            }
        }
    }

    free(input);
    return count;
}