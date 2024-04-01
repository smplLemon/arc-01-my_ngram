#include <stdio.h>
#include <string.h>


int countCharacters(const char* string) {
    int count = 0;
    while (*string) {
        count++;
        string++;
    }
    return count;
}


void counter(int argc, char **argv) {
    int counts[128] = {0}; 

    
    for (int i = 1; i < argc; i++) {
        char* str = argv[i];
        while (*str) {
            counts[(int)*str]++;
            str++;
        }
    }

   
    for (int i = ' '; i <= 'z'; i++) {
        if (counts[i] > 0) {
            printf("%c:%d\n", i, counts[i]);
        }
    }
}

int main(int argc, char **argv) {
    
    if (argc < 2) {
        printf("Usage: %s string1 string2 ... stringN\n", argv[0]);
        return 1;
    }
    
    counter(argc, argv);
    return 0;
}