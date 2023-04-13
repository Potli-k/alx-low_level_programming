#include <stdlib.h>
#include <string.h>

char **strtow(char *str) {
    
    if (str == NULL || strlen(str) == 0) {
        return NULL;
    }

    int word_count = 0;
    char *token = strtok(str, " ");
    while (token != NULL) {
        word_count++;
        token = strtok(NULL, " ");
    }

    
    char **words = malloc((word_count + 1 *)  sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

 
    token = strtok(str, " ");
    int i = 0;
    while (token != NULL) {
        int word_length = strlen(token);
        char *word = malloc((word_length + 1 *)  sizeof(char));
        if (word == NULL) 
    }
            for (int j = 0; j < i; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }
        strcpy(word, token);
        words[i++] = word;
        token = strtok(NULL, " ");
    }
    words[i] = NULL;

    return words;
}

