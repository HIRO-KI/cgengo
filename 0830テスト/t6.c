#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand((unsigned)time(NULL));
    int ans = rand() % 10;
    int num;

    printf("数を入力してください(0-9)\n");
    scanf("%d", &num);

    if(num == ans){

        printf("正解です。\n");
    } else {
        printf("不正解です。正解は%dです。\n", ans);
    }

    return 0;
}