#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int my_argv_len(int argc, char** argv)
{
    int c = argc;
    for (int i = 1; argv[i] != NULL; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            c++;
        }
    }
    return c;
}

char* argv_to_string(int argc, char** argv)
{
    int len = my_argv_len(argc, argv);
    int new_index = 0;

    char* string = malloc((len + 1) * sizeof(char));

    for (int i = 1; argv[i] != NULL; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            string[new_index++] = argv[i][j];
        }
    }

    return string;
}

int my_strlen(char* p1)
{
    int count = 0;
    for (int i = 0; p1[i]; i++)
    {
        count++;
    }
    return count;
}

int my_intlen(int* p1)
{
    int c = 0;
    while (p1[c] > 0)
    {
        c++;
    }
    return c;
}

int my_arr_len(int* arr)
{
    int count = 0;
    for (int i = 0; i < 127; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int* my_main_func(char* paramStr)
{
    int* arr = calloc(sizeof(int), 128);
    int len = my_strlen(paramStr);
    for (int i = 0; i < len; i++)
    {
        arr[(int)paramStr[i]]++;
    }
    return arr;
}

int* my_ngram(int* p1)
{
    int len = my_arr_len(p1);
    int* result = calloc(sizeof(int), (len * 2) + 1);
    int res_index = 0;
    for (int i = 0; i < 127; i++)
    {
        if (p1[i] > 0)
        {
            result[res_index++] = i;
            result[res_index++] = p1[i];
        }
    }
    return result;
}
void brain(int argc, char** argv)
{
    char* str = argv_to_string(argc, argv);

    int* arr = my_main_func(str);

    int* result = my_ngram(arr);

    for (int i = 0; i < my_intlen(result); i++)
    {
        if ((i % 2) == 0 || i == 0)
        {
            printf("%c:%d\n", result[i], result[i + 1]);
        }
    }
}

int main(int argc, char** argv)
{
    brain(argc, argv);
    return 0;
}