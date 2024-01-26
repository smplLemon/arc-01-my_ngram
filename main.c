#include <stdio.h>

void count(const char *s) {
    int freq[256] = {0};

    for (int i = 0; s[i] != '\0'; ++i) {
        freq[(unsigned char)s[i]]++;
    }

    
    for (int i = 0; i < 256; ++i) {
        if (freq[i] > 0) {
            printf("%c:%d\n", (char)i, freq[i]);
        }
    }
}

int main(int argc, char *argv[]) {
    
    for (int i = 1; i < argc; ++i) {
        count(argv[i]);
    }

    return 0;
}