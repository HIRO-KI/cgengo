#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    string s, x;

    printf("2つの文字を入力し、べき乗の計算をおこないます。\n");

    printf("元になる数字を入力してください。\n");
    scanf("%s", s);
    int num = atoi(s);

    printf("回数を入力してください。\n");
    scanf("%s", x);  
    int exp = atoi(x);
    
    int sum = 1;

    for(int i = 0; i < exp; i++){
        sum = sum * num;
    }

    printf("%dの%d乗は、%dです。\n", num, exp, sum);

    return 0;
}