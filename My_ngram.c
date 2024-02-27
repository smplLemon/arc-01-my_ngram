#include <stdio.h>
#include <string.h>

int countNGrams(int argc, char** argv) {
    int acceptance[127];
    int i = 0;
    while (i < 127) {
        acceptance[i] = 0;
        i++;
    }
    i = 1;
    while (i < argc) {
        int j = 0;
        while (j < (int)strlen(argv[i])) {
            acceptance[(int)argv[i][j]]++;
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 127) {
        if (acceptance[i] > 0) {
            printf("%c:%d\n", i, acceptance[i]);
        }
        i++;
    }
    return 0;
}

int main(int argc, char *argv[]) {    
    countNGrams(argc,argv);
    return 0;   
}