#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand((unsigned)time(NULL));
    int ans = rand() % 10;
    int num;

    printf("������͂��Ă�������(0-9)\n");
    scanf("%d", &num);

    if(num == ans){

        printf("�����ł��B\n");
    } else {
        printf("�s�����ł��B������%d�ł��B\n", ans);
    }

    return 0;
}