#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void count_chars(char *str) {
    int counts[256] = {0};

    for (int i = 0; str[i]; i++) {
        counts[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (counts[i] > 0) {
            printf("%c:%d\n", i, counts[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Usage: %s [text1, text2, ...]\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        count_chars(argv[i]);
    }

    return 0;
}