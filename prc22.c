#include <stdio.h>

void swap(int* x, int* y);

int main(void){

    int a = 5;
    int b = 10;

    printf("a(%d)��b(%d)�̒l�����ւ��܂�\n", a, b);

    swap(&a, &b);

    printf("���ʂ�a = %d b = %d �ł�\n", a, b);

    return 0;
}

void swap(int* px, int* py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}