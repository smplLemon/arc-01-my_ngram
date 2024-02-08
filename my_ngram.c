#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        printf("These undefined symbols....?\n");
        return 1;
    }
    int mylet[127];
    for(int i=0;i<127;i++)
    {   
        mylet[i]=0;
    }
    for(int i=1;i<argc;i++)
    {
        for(int j = 0;j< (int)strlen(argv[i]);j++)
        {
            mylet[(int)argv[i][j]]++;
        }
    }
    int i=0;
    while(i<127)
    {
        if(mylet[i]>0 )
        {    
            printf("%c:%d\n",i, mylet[i]);
        }
        i++;    
    }
    return 0;
}