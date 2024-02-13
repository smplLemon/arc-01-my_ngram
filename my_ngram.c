#include <stdio.h>
#include <string.h>

void my_ngram(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Usage: %s [string]...\n", argv[0]);
        return;
    }

    int counts[256] = {0};

    for (int i = 1; i < argc; i++) {
        const char *text = argv[i];
        for (int j = 0; text[j] != '\0'; j++) {
            counts[(unsigned char)text[j]]++;
        }
    }

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