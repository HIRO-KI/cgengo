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
    printf("�ō����_��%d�ł��B\n", max);
    printf("�Œ�_��%d�ł��B\n", min);

    return 0;
}
