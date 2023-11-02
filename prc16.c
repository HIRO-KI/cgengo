#include <stdio.h>

int main(void){

    int scores[5] = {80,60,22,50,75};
    int max = scores[0];
    int min = scores[0];
    
    for(int i = 0; i < 5; i++){
        
        if(max < scores[i]){
            max = scores[i];
        }

        if(min > scores[i]){
            min = scores[i];
        }
    }
    printf("最高得点は%dです。\n", max);
    printf("最低点は%dです。\n", min);

    return 0;
}
