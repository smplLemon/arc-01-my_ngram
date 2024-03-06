#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128

void my_integer(int* digits, char* str)
{
    int index = 0;
    while (str[index] != '\0')
    {
        if (str[index] != '"')
        {
            digits[(int)str[index]]++;
        }
        index++;
    }
}

void my_counters(int* counts, int limit)
{
    int weight = 0;
    while (weight < limit)
    {
        if (counts[weight] > 0)
        {
            printf("%c:%i\n", weight, counts[weight]);
        }
        weight++;
    }
}

int main(int argc, char** argv)
{
    int i, array[MAX_ARRAY_SIZE] = {0};
    for (i = 1; i < argc; i++)
    {
        my_integer(array, argv[i]);
    }
    my_counters(array, MAX_ARRAY_SIZE);
    return EXIT_SUCCESS;
}

