#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    string s;

    printf("0����10�܂ł̐�������͂��Ă��������B\n");
    scanf("%s",s);

    int n = atoi(s);

    if(n <= 10 && 0 <= n){
        printf("�����ł��B\n");

    } else {
        printf("�ԈႢ�ł��B\n");
    }

    return 0;
}