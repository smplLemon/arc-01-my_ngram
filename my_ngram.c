#include <stdio.h> 
int main(int bounty_1, char* bounty_2[]) {
    int now[128] = {0};
    for(int i = 1; i < bounty_1; i++){
        for(int a = 0; bounty_2[i][a] != '\0'; a++){
            now[(int)bounty_2[i][a]]++;
        }
    }
    for(int mars_1 = 0; mars_1 < 128; mars_1++){
        if(now[mars_1] > 0) {
            printf("%c:%d\n", mars_1, now[mars_1]);
        }
    }
}