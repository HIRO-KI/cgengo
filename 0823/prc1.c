#include <stdio.h>

double calcAverage(int x, int y);

int main(void){

    int a, b;

    printf("������2���͂��Ă�������\n");

    scanf("%d", &a);
    scanf("%d", &b);

    double ave = calcAverage(a, b);

    printf("2�̕��ϒl��%.2f�ł��B\n", ave);

    return 0;
}

double calcAverage(int x, int y){

    return  (x + y) / 2.0;
}