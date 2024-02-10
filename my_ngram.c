#include <stdio.h> 
 
#define ASCII_RANGE 128 
 
void countCharacters(int argc, char **argv) 
{ 
    int counts[ASCII_RANGE] = {0}; 
 
    for (int i = 1; i < argc; i++) 
    { 
        char *currentArg = argv[i]; 
         
        for (int j = 0; currentArg[j] != '\0'; j++) 
        { 
            unsigned char currentChar = (unsigned char)currentArg[j]; 
            counts[currentChar]++; 
        } 
    } 
 
    for (int i = 0; i < ASCII_RANGE; i++) 
    { 
        if (counts[i] > 0) 
        { 
            printf("%c: %d\n", i, counts[i]); 
        } 
    } 
} 
 
int main(int argc, char **argv) 
{ 
    countCharacters(argc, argv); 
    return 0; 
}
