#include <stdio.h>

void swap(int* x, int* y);

int main(void){

    int a = 5;
    int b = 10;

    printf("a(%d)とb(%d)の値を入れ替えます\n", a, b);

    swap(&a, &b);

    printf("結果はa = %d b = %d です\n", a, b);

    return 0;
}

void swap(int* px, int* py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}