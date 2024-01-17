#include<stdio.h>
#include<ctype.h>
#define SIZE 200

int main(int ac, char **av){
    int i, j, a, ch, count[SIZE] = {0};
    
    for(i = 1; i < ac; i++){
        for(j = 0; av[i][j] != '\0'; j++){
            ch = tolower(av[i][j]);
            count[ch]++;
        }
    }

    for(a = 0; a<SIZE; a++){
        if(count[a]){
            printf("%c: %d\n", a, count[a]);
        }
    }

    return 0;
}