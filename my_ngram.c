#include <stdio.h>
#include <string.h>

void counter(int argc, char **argv) 
{
    int count;

    for(char character = ' '; character <= 'z'; character++){
        count = 0;
        for(int k = 1; k < argc; k++){
            for(int j = 0; j < strlen(argv[k]); j++){
                if(character == argv[k][j]){
                    count++;
                }
            }
        }
        if(count > 0)
        {
            printf("%c: %d\n", character, count);
        }     
    }
}
int main(int argc, char **argv) {
    counter(argc,argv);
    return 0;
}
