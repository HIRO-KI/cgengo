#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    string s;

    printf("0から10までの整数を入力してください。\n");
    scanf("%s",s);

    int n = atoi(s);

    if(n <= 10 && 0 <= n){
        printf("正解です。\n");

    } else {
        printf("間違いです。\n");
    }

    return 0;
}