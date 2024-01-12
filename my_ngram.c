#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128
//____________________________________________________________________________________________________________________
// episode of my_plans

void my_plans(int *ruhshon_1, char *ruxshon_2)
{
    int ruh_1 = 0;
    while (ruxshon_2[ruh_1] != '\0')
    {
        if (ruxshon_2[ruh_1] != '"')
        {
            ruhshon_1[(int)ruxshon_2[ruh_1]]++;
        }
        ruh_1++;
    }
}
//__________________________________________________________________________________________________________________
// type_car

void type_car(int *Merc, int BMW)
{
    int weight = 0;
    while (weight < BMW)
    {
        if (Merc[weight] > 0)
        {
            printf("%c:%i\n", weight, Merc[weight]);
        }
        weight++;
    }
}

int main(int car_1, char **car_2)
{
    int wheel = 1, array[MAX_ARRAY_SIZE] = {0};
    while (wheel < car_1)
    {
        my_plans(&array[0], car_2[wheel]);
        wheel++;
    }
    type_car(&array[0], 128);
    return EXIT_SUCCESS;
}