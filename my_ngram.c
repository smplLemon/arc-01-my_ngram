#include <stdio.h>
#include <string.h>
#include "my_ngram.h"
void my_ngram(int argc, char**argv){
        int counter;
    for(char character = ' '; character<='z'; character++){
        counter =0;
        for(int i=1; i<argc; i++){
            for(int j=0; j<strlen(argv[i]); j++){
                if(character==argv[i][j]){
                    counter++;
                }
            }
        }
    if(counter){
        printf("%c:%d\n",character,counter);
    }
    }
}

int main(int argc, char**argv){
    my_ngram(argc, argv);
    return 0;
}