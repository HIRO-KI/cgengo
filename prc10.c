#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    string s, x;

    printf("2�̕�������͂��A�ׂ���̌v�Z�������Ȃ��܂��B\n");

    printf("���ɂȂ鐔������͂��Ă��������B\n");
    scanf("%s", s);
    int num = atoi(s);

    printf("�񐔂���͂��Ă��������B\n");
    scanf("%s", x);  
    int exp = atoi(x);
    
    int sum = 1;

    for(int i = 0; i < exp; i++){
        sum = sum * num;
    }

    printf("%d��%d��́A%d�ł��B\n", num, exp, sum);

    return 0;
}