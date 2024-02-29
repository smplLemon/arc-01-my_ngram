#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 2048

void My_Ngarm(int as, char** av){
    int a = 0;
    int c = 0;  
    int count[MAX_SIZE] = {0};

    for(int i = 1; i < as; i++)
    {
        for (c = 0; av[i][c] != '\0'; c++)
        {
            a = av[i][c];
            count[(unsigned char)a]++;
        }
    }
    for (int j = 0; j < MAX_SIZE; j++)
    {
        if(count[j])
        {
            printf("%c: %d\n", j, count[j]);
        }
    }
}
int main(int argc, char **argv)
{
    My_Ngarm(argc, argv);
    return 0;
}
