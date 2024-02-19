#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void counting_characters(const char *sign,int n ,int *index)
{
    for (int i = 0; sign[i] != '\0'; i++) 
    {
        int j = i;
        int index_1 = 0;
        for (int j = i; j < i + n && sign[j] != '\0'; j++) 
        {
            index_1 = index_1 * 256 + sign[j];
        }
        index[index_1]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (index[i] > 0)
        {
            printf("%c - %d ta\n",i, index[i]);
            sleep(1);
        }
    }
}

int main()
{
    char* sign_arr = calloc(256, sizeof(char));
    int* index_arr = calloc(256, sizeof(int));
    
    printf("Enter sign , number or word : ");
    scanf("%s",sign_arr);
    
    counting_characters(sign_arr,1,index_arr);
    free(sign_arr);
    free(index_arr);
    
    return 0;
}