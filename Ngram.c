#include <stdio.h> 
#include <string.h> 
 
int main(int argc, char** argv) { 
    int count; 
    for (char character = ' '; character <= 'z'; character++) 
    { 
        count = 0; 
        int i = 1; 
        while (i <= argc) 
        { 
            i++; 
            for (int j = 0; j < strlen(argv[i]); j++) 
            { 
                if (character == argv[i][j]) 
                    { 
                        count++; 
                    } 
            } 
        } 
        if(count){ 
            printf("%c:%d\n", character, count); 
        } 
    } 
    return 0;  
}