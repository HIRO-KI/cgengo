// �ϐ�a=20��b=30�̒l�����ւ���v���O����
#include <stdio.h>

int main(void){
    int a = 20;
    int b = 30;
    int n = 0;

    printf("�����l�́@a = %d , b = %d�ł�\n", a, b);

    n = a;
    a = b;
    b = n;

    printf("����ւ���̒l�́@a = %d , b = %d�ł�\n", a, b);


    return 0;
}