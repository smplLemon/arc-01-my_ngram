#include <stdio.h>

// defining main with arguments
int main(int argc, char* argv[])
{
  int counter;
  for (int j = 0; j < 127; j++)  
  {
    counter = 0;
    for (int i = 1; i < argc; i++) 
    {
      for (int k = 0; argv[i][k]; k++)
      {
        if (j == argv[i][k])
        {
          counter+=1;
        }
      }
    
     }
   if (counter>0)
   {
     printf(" %c:%i\n",j ,counter);
   }
    
  }
    return 0;
}