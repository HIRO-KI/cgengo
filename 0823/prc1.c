#include <stdio.h>

double calcAverage(int x, int y);

int main(void){

    int a, b;

    printf("整数を2つ入力してください\n");

    scanf("%d", &a);
    scanf("%d", &b);

    double ave = calcAverage(a, b);

    printf("2つの平均値は%.2fです。\n", ave);

    return 0;
}

double calcAverage(int x, int y){

    return  (x + y) / 2.0;
}