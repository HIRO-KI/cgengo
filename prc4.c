// 変数a=20とb=30の値を入れ替えるプログラム
#include <stdio.h>

int main(void){
    int a = 20;
    int b = 30;
    int n = 0;

    printf("初期値は　a = %d , b = %dです\n", a, b);

    n = a;
    a = b;
    b = n;

    printf("入れ替え後の値は　a = %d , b = %dです\n", a, b);


    return 0;
}