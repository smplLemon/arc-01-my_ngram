#include<stdio.h>
#include<string.h>

void c_occurrences(  char *text){
	int i;
	int k[128] = {0};//ASCII table characters

   for (i=0; text[i]!='\0'; i++){
	k[( unsigned char)text[i]]++;
   }	
   for(int i=0; i<128; i++){
	 if(k[i]>0){
		printf("%c: %d \n",i,k[i]);
	 }
   }

}
int main(int argc, char *argv[]){
	    if(argc < 1){
		fprintf(stderr, " %s \n", argv[0]);
        return 1;  
        }
		c_occurrences(argv[1]);
        printf("\n");
    
        return 0;
    }