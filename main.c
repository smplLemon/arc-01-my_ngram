#include<stdio.h>
#include<string.h>
void my_ngram(int lenght, char **obct1){
    int str[127] = {0};
    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < obct1[i][j]; j++)
        {
            char word = obct1[i][j];
            str[(int)word]++;
        }      
    }
    for (int i = 0; i < 127; i++)
    {
        if (str[i]>0)
        {
            printf("%c : %d\n", i, str[i]);
        }   
    }  
}
int main(int argc, char **argv){
    my_ngram(argc,argv);
    return 0;
}
