#include <stdio.h>

void change(int* a, int* b);

int main(void){

    int x1, x2;

    printf("2�̒l����͂��Ă��������B\n");
    scanf("%d", &x1);
    scanf("%d", &x2);

    change(&x1, &x2);

    printf("����ւ����\n");
    printf("�l1��%d�ƂȂ�܂����B\n", x1);
    printf("�l2��%d�ƂȂ�܂����B\n", x2);

    return 0;
}

void change(int* a, int* b){

    int n = *a;
    *a = *b;
    *b = n;
}