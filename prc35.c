#include <stdio.h>

int main(void){

    int n[5] = {0};
    int i;

    printf("整数を入力してください。（5回）\n");

    for(i = 0; i < 5; i++){
        scanf("%d", &n[i]);
    }

    printf("偶数は、");

    for(i = 0; i < 5; i++){

        if(n[i] %2 == 0){
            printf("%d ", n[i]);
        }
    }
    printf("です。\n");

    printf("奇数は、");

    for(i = 0; i < 5; i++){

        if(n[i] %2 != 0){
            printf("%d ", n[i]);
        }
    }
    printf("です。\n");

    return 0;
}