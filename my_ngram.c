#include <stdio.h>

int my_strlen(char* p1){
  int i = 0;
	while(p1[i] != '\0')
		i++;
	return i;
}

char* bubbleSort(char* p1){
  int len = my_strlen(p1);
  char temp;
  for(int i = 0; i < len; i++){
    for(int j = 0; j < len-i-1; j++){
      if(p1[j] > p1[j+1]){
        temp = p1[j];
        p1[j] = p1[j+1];
        p1[j+1] = temp;
      }
    }
  }
  return p1;
}

void my_ngram(char* p1){
  int len = my_strlen(p1);
  int duplic = 1;
  
  for(int i = 0; i < len; i++){
    for(int j = i + 1; j <= len; j++){ 
      if(p1[i] == p1[j]){
        duplic +=1;
        i++;
      }
      else{
        printf("%c:%d\n", p1[i], duplic);
        duplic = 1;
        break;
      }
    }
  }
}

int main(int argc, char* argv[]){
  if (argc == 1){
    printf("Error! No characters were entered.");
    return 1;
  }
	int len = 0;
	
	for(int i = 1; i < argc; i++)
		len += my_strlen(argv[i]);

	char buf1[len];
	
	int k = 0;
  
	for(int i = 1; i < argc; i++){
    int lenstr = my_strlen(argv[i]);
	  for(int j = 0; j < lenstr; j++){
      buf1[k] = argv[i][j];
      k++;
	  }
    buf1[k] = '\0';
	}

  char* bufsort = bubbleSort(buf1);
  
  my_ngram(bufsort);
    
  return 0;
}