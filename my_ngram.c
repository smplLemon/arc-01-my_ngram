#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void count_occurrences(const char *text, int *count){
    for(int i = 0; i < strlen(text); i++){
        count[(unsigned char)text[i]]++;
    }
}

void print_results(int *count){
    for(int i = 0; i < 256; i++){
        if(count[i] > 0){
            printf("%c:%d\n", i, count[i]);
        }
    }
}

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("%s\n", argv[0]);
        return 1;
    }
    int *count = (int *)calloc(256, sizeof(int));
    if(count == NULL){
        fprintf(stderr, "\n");
        return 1;
    }
    for (int i = 1; i < argc; i++){
        count_occurrences(argv[i], count);
    }
    print_results(count);
    free(count);
    return 0;
}