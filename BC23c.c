#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void){
    printf("�O�p�`�̖ʐς����߂܂��B\n");

    String a;
    printf("��ӂ̒�������͂��Ă��������B\n");
    scanf("%s", a);

    String h;
    printf("��������͂��Ă��������B\n");
    scanf("%s", h);

    //double s = atoi(a) * atoi(h) / 2.0;

    int aa = atoi(a);
    int hh = atoi(h);
    //double s = x * z / 2.0;
    printf("�ʐς�%.2f�ł��B\n", aa * hh / 2.0);

    return 0;
}