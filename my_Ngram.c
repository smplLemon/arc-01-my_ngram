#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int counting_characters(char * word,int * index)
{
    for (int i = 0; word[i] != '\0'; i++) 
    {
        char sign = word[i];
        if ( sign >= 'a' && sign <= 'z') 
        {
            index[sign - 'a']++;
        }
        else if (sign >= 'A' && sign <= 'Z') 
        {
            index[sign - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++) 
    {
        if (index[i] > 0)
        {
            printf("%c - harfi: %d ta\n", 'a' + i, index[i]);
            sleep(1);
        }
    }
    return 0;
}
int main()
{
   char* word_arr = calloc(100,sizeof(char));
   int* index_arr = calloc(26,sizeof(int));
   printf("SO'Z KIRITING: ");
   scanf("%s",word_arr);
   
   counting_characters(word_arr,index_arr);
   return 0;
}           