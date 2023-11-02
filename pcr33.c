#include <stdio.h>

int main(void){

    int n = 0;
    int max = 0;

    printf("整数を入力してください。（5回）\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &n);

        if(max < n){
            max = n;
        }
    }
    printf("最大値は%dです。\n", max);

    return 0;
}