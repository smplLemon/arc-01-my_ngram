#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    int rom[512] = {0};
    
    int i = 1;
    while (i < argc) {
        int a = 0;
        while (argv[i][a] != 0) {
            rom[(int)argv[i][a]]++;
            a++;
        }
        i++;
    }
    
    int loop = 0;
    while (loop < 512) {
        if (rom[loop] > 0) {
            printf("%c:%d\n", loop, rom[loop]);
        }
        loop++;
    }
    
    return 0;
}