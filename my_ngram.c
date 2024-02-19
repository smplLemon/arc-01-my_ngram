
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_ngram(int argc, char *argv[]) {


    int counts[256] = {0};
    char *concatenated = NULL;

    for (int i = 1; i < argc; i++) {
        size_t len = strlen(argv[i]);
        concatenated = realloc(concatenated, sizeof(char) * (len + 1));
        strcpy(concatenated, argv[i]);

        for (int j = 0; j < len; j++) {
            counts[(unsigned char)concatenated[j]]++;
        }
    }

    free(concatenated);

    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            printf("%c: %d\n", (char)i, counts[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    my_ngram(argc, argv);
    return 0;
}