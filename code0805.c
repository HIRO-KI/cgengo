#include <stdio.h>

typedef char string[1024];

// プロトタイプ宣言
void hello(string name);

int main(void){
    printf("関数を呼び出します\n");

    hello("岬");
    hello("赤城");
    hello("海藤");

    printf("関数の呼び出しが終わりました\n");


    return 0;
}

void hello(string name){
    printf("%sさん、こんにちは\n", name);
}