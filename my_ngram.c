#include <stdio.h>
#include <stdlib.h>
#define  MAX_ARRAY_SIZE 128
int ismoil(char *str) {
    int ismoil01 = 0;

    while (str[ismoil01] != '\0') {
        ismoil01 += 1;
    }
    return ismoil01;
}
 
  void ziko(int* array,  char * str) {
       int ismoil01 =0;

     
       while (str[ismoil01] !='\0') {
           if(str[ismoil01] != '"'){
           array[(int)str[ismoil01]] +=1;
           }
        ismoil01 += 1;
       }
  }

  void print_array(int* array, int size_array) {
      int ismoil01 = 0;


       while(ismoil01 < size_array) {
           if (array[ismoil01] > 0) {
             printf ("%c:%d\n", ismoil01, array[ismoil01]);
           }
            ismoil01 += 1;
       }
  }

  int main(int ac ,char **av) {
      int ismoil01 = 1;
      int array[MAX_ARRAY_SIZE] = {0};



      while (ismoil01 < ac) {
          ziko(&array[0], av [ismoil01]);
          ismoil01 +=1;
      }
      print_array(&array[0], MAX_ARRAY_SIZE);
      return EXIT_SUCCESS;
  }
