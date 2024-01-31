#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

int main(int arc, char *arv[]){
  if(arc < 2){
    printf("Usage: %s ./a.exe 'txt2', 'txt3'\n", arv[0]);
    exit(1);
  }
  int ch_cnts[MAX] = {0};
  for(int i = 1; i < arc; ++i){
    char *txt = arv[i];
    while(*txt){
      int ch_indx = (unsigned char)*txt;
      ch_cnts[ch_indx]++;
      txt++;
    }
  }
  for(int i = 0; i < MAX; ++i){
    if(ch_cnts[i] > 0){
      if(i < 32 || i > 126){
        printf("%c:%d\n", '\\', i);
      } else{
        printf("%c:%d\n", i, ch_cnts[i]);
      }
    }
  }

  return 0;
}
