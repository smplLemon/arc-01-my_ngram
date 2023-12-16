#include <stdio.h>
#include <stdlib.h>

void my_int_array_printer(int *arr)
{
    for (int i = 0; i < 128; i++)
    {
        if (arr[i] > 0)
        {
            printf("%c:%d\n", i, arr[i]);
        }
    }
}

void my_char_counter(int argc, char **argv)
{
    int *arr = calloc(4, 128);
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            arr[(int)argv[i][j]]++;
        }
    }
    my_int_array_printer(arr);
}

int main(int argc, char **argv)
{
    my_char_counter(argc, argv);
    return 0;
}