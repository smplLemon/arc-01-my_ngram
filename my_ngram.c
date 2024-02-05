#include <stdio.h>

void count(const char *s) {
    int freq[256] = {0};
    int total[256] = {0}; 

    for (int i = 0; s[i] != '\0'; ++i) {
        freq[(unsigned char)s[i]]++;
        total[(unsigned char)s[i]]++;
    }

    
    for (int i = 0; i < 256; ++i) {
        if (total[i] > 0) {
            printf("%c:%d\n", (char)i, total[i]); 
        }
    }
}

int main(int argc, char *argv[]) {
    
    for (int i = 1; i < argc; ++i) {
        count(argv[i]);
    }

    return 0;
}
