#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    // const int DAIKICHI = 1;
    // const int CHUKICHI = 2;
    // const int KICHI = 3;
    // const int KYO = 4;

    enum {DAIKICHI = 1, CHUKICHI, KICHI, KYO};

    printf("���Ȃ��̉^����肢�܂�\n");

    srand((unsigned)time(NULL));
    int fortune = rand() % 4 + 1;

    //printf("%d\n", fortune);

    switch(fortune){
        case DAIKICHI:
            printf("��g\n");
            break;
        case CHUKICHI:
            printf("���g\n");
            break;
        case KICHI:
            printf("�g\n");
            break;
        default:
            printf("��\n");
    }

    return 0;
}