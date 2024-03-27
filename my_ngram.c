#include<stdio.h>
 #include<string.h>

void c_occurrences(int length, char **text){
  int i, j;
  int k[128] = {0};//ASCII table characters
    for(i=1; i<length;i++){
       for (j=0; text[i][j]; j++){
        char lt= text[i][j];
     k[(int)lt]++;
       }
   }  
   for(int i=0; i<128; i++){
   if(k[i]>0){
    printf("%c: %d \n",i,k[i]);
   }
   }

}
int main(int argc, char **argv){
    c_occurrences(argc,argv);
    return 0;
}