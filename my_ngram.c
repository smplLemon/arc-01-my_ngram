#include <stdio.h> 
int main(int elment_1, char* elment_2[]) {
    int just[128] = {0};
    for(int i = 1; i < elment_1; i++){
        for(int a = 0; elment_2[i][a] != '\0'; a++){
            just[(int)elment_2[i][a]]++;
        }
    }
    for(int param_1 = 0; param_1 < 128; param_1++){
        if(just[param_1] > 0) {
            printf("%c:%d\n", param_1, just[param_1]);
        }
    }
}