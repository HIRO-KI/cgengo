#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    string s;

    printf("���т���͂��Ă�������\n");
    scanf("%s", s);

    int x = atoi(s);

    switch (x){
    case 1:
        printf("���т�1�ł��B\n�����Ƃ���΂�܂��傤�B\n");
        break;

    case 2:
        printf("���т�2�ł��B\n������������΂�܂��傤�B\n");
        break;

    case 3:
        printf("���т�3�ł��B\n����ɏ��ڎw���܂��傤�B\n");
        break;

    case 4:
        printf("���т�4�ł��B\n�����ւ�悭�ł��܂����B\n");
        break;

    case 5:
        printf("���т�5�ł��B\n�����ւ�D�G�ł��B\n");
        break;
    
    default:
        printf("���͂��Ԉ���Ă��܂��B\n");
        break;
    }

    return 0;
}