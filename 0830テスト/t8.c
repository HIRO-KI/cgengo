#include <stdio.h>

int main(void){

    int score[6] = {48, 52, 58, 84, 75, 95};
    int fast = score[0];
    int second = 0;

    for(int i = 0; i < 6; i++){

        if(fast < score[i]){

            fast = score[i];
        } 
    }

    for(int i = 0; i < 6; i++){

        if(second < score[i] && score[i] < fast){
            
            second = score[i];
        }
    }
    printf("1�ʂ�%d�ł��B\n", fast);
    printf("2�ʂ�%d�ł��B\n", second);

    return 0;
}