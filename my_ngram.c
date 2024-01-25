//Libraries
#include <string.h>
#include <stdio.h>
#define count_of_letter 127

///Counts the length of the input string;
int Str_len(char arr[])
{
    int length = 0;
    for (int i = 0; arr[i]; i++)length++;
    return length;
}
//Counts how many times a letter is repeated;
void Counter(int* alphabet_arr, int argc, char** argv)
{
    for (int i = 1; i < argc; i++)
    {
        for (int k = 0; k < Str_len(argv[i]); k++)
        {
            alphabet_arr[argv[i][k]]+=1;
        }
    }
}
//print the number of occurrences of a letter;
void Printer(int* arr)
{
    for (int i = 0; i < count_of_letter; i++)
    {
        if (arr[i] != 0)
        {
            printf("%c:%d\n", i, arr[i]);
        }
    }
}
//Function that accepts all functions;
int main_function(int argc, char** argv)
{
  int alphabet_arr[count_of_letter] = {0};
    Counter(alphabet_arr, argc, argv);
    Printer(alphabet_arr);
    return 0;
}
int main(int argc, char **argv)
{
    main_function(argc, argv);
    return 0;
}