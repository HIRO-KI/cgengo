#include <stdio.h>

int main(void){

    int n[5];
    int s;
    int i = 0;

    printf("整数を入力してください。（5回）\n");

    for(i; i < 5; i++){

        scanf("%d", &s);
        *(n + i) = s;
    }

    printf("逆順で出力します。\n");

    for(i = 4; i >= 0; i--){
        printf("%d \n", *(n + i));

    }
    return 0;
}