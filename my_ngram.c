#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARACTERS 256

void my_ngram(char *combined_input) {
    int counts[MAX_CHARACTERS] = {0};
    size_t length = strlen(combined_input);

    for (size_t i = 0; i < length; i++) {
        counts[(unsigned char)combined_input[i]]++;
    }

    for (int i = 0; i < MAX_CHARACTERS; i++) {
        if (counts[i] > 0) {
            printf("%c: %d\n", (char)i, counts[i]);
        }
    }
}

int main(int argc, char *argv[]) {

    int total_length = 0;
    for (int i = 1; i < argc; i++) {
        total_length += strlen(argv[i]);
    }

    char *combined_input = (char *)malloc(total_length + 1);
    if (combined_input == NULL) {
        return 1;
    }

    combined_input[0] = '\0';

    for (int i = 1; i < argc; i++) {
        strcat(combined_input, argv[i]);
    }

    my_ngram(combined_input);

    free(combined_input);

    return 0;
}
