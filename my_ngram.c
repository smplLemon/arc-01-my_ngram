#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int my_argv_length(char *argv[]){
    int j = 0;
    int p = 0;
    for (int i = 1; argv[i]; i++){
        for (j = 0; j < argv[i][j]; j++){
            p++;
        }
    }
    return p;
}
void my_ngram(char *argv, int len){
    char *str = calloc(127, sizeof(char));
    for (int i = 0; i < len; i++){
        for (int j = 0; j < 127; j++){
            if (argv[i] == j){
                str[(int)j]++;
            }
        }
    }
    int *array_1 = calloc(len / 2, sizeof(int)), *array_2 = calloc(len / 2, sizeof(int));
    int p = 0;
    for (int i = 0; i < 127; i++){
        if (str[i] != 0){
            array_1[p] = str[i];
            array_2[p] = i;
            printf("%c:%d\n", array_2[p], array_1[p]);
            p++;
        }
    }
}
void my_mix_array(int args, char *argv[]){
    int p = 0;
    char *array = calloc(my_argv_length(argv), sizeof(char));

    for (int i = 1; i < args; i++){
        for (int j = 0; argv[i][j]; j++){
            array[p++] = argv[i][j];
        }
    }
    my_ngram(array, p);
}
int main(int argc, char *argv[]){
    my_mix_array(argc, argv);
    return 0;
}