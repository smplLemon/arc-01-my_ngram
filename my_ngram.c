#include <stdio.h>


int main(int argc, char** argv) {
    int count[127] = {0};


    
    for (int i = 1; i < argc; i++)
    {
        for (int k = 0; argv[i][k]; k++)
        {
            count[(int)argv[i][k]]++;
        }
        
        
    }
    for (int i = 0; i < 127; i++)
    {
        if(count[i]> 0){
            printf("%c : %d\n", i,  count[i]);
        }
    }

}