#include <stdio.h>

int main(void){

    int a;

    printf("整数を入力してください。\n");
    scanf("%d", &a);

    for(int i = 0; i < a; i++){
        printf("*");
    }

    return 0;
}