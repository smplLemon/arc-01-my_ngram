#include <stdio.h>

void my_ngram(int size, char** arr) 
{
    int kl_arr[127] = {0};
    int temp;
    
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; arr[i][j] != '\0'; j++) {
            temp = arr[i][j];
            kl_arr[temp]++;
        }
    }
    
    for (int i = 0; i < 127; i++) 
    {
        if (kl_arr[i] != 0) 
        {
            printf("%c:%d\n", i, kl_arr[i]);
        }
    }
}

int main(int argc, char** argv) 
{
    my_ngram(argc, argv);
    return 0;
}