#include <stdio.h>

void my_ngram(int size, char** arr) {
    int kl_arr[127] = {0};
    int temp;
    int i = 0;
    
    while (i < size) {
        int j = 0;
        while (arr[i][j] != '\0') {
            temp = arr[i][j];
            kl_arr[temp]++;
            j++;
        }
        i++;
    }
    
    int k = 0;
    while (k < 127) {
        if (kl_arr[k] != 0) {
            printf("%c:%d\n", k, kl_arr[k]);
        }
        k++;
    }
}

int main(int argc, char** argv) {
    my_ngram(argc, argv);
    return 0;
}
