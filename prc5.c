// 1����7�܂ł̐�������͂���ƁA����ɑΉ������j�����o�͂���
#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){

    string s;

    printf("�ȉ��̑Ή������j�����o�͂��܂��B\n");
    printf("1:���j���@2:�Ηj���@3:���j���@4:�ؗj���@5:���j���@6:�y�j���@7:���j��\n");

    printf("��������͂��Ă��������B\n");
    scanf("%s", s);

    int day = atoi(s);

    switch (day){
        case 1:
            printf("���j��\n");
            break;
        
        case 2:
            printf("�Ηj��\n");
            break;

        case 3:
            printf("���j��\n");
            break;

        case 4:
            printf("�ؗj��\n");
            break;

        case 5:
            printf("���j��\n");
            break;

        case 6:
            printf("�y�j��\n");
            break;

        case 7:
            printf("���j��\n");
            break;
        
        default:
            printf("���͂��Ԉ���Ă��܂��B\n");
    }

    return 0;
}