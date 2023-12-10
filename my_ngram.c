#include <stdio.h>
 #include <stdlib.h>
 #define MAX_ARRAY_SIZE 128

 int kod(char *str) {
     int kod = 0;
 
     while (str[kod] != '\0'){
         kod += 1;
     }
     return kod;
 }
 
 void kod_1(int* array, char * str) {
     int kod = 0;
 
     while (str[kod] != '\0'){
         if(str[kod] != '"'){
             array[(int)str[kod]] +=1;
         }
         kod +=1;
     }
 }
 
 void print_array(int*array, int size_array) {
     int kod = 0;
 
     while(kod < size_array){
         if(array[kod] > 0){
             printf ("%c:%d\n",kod, array[kod]);
         }
         kod += 1;
     }
 }
 
 int main(int ac,char **av) {
     int kod = 1;
     int array[MAX_ARRAY_SIZE] = {0};
 
 
     while ( kod < ac) {
 kod_1(&array[0], av [kod]);
 kod += 1;
 
     }
     print_array(&array[0],MAX_ARRAY_SIZE);
     return EXIT_SUCCESS;
 }
