#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("���Ȃ��̉^����肢�܂�\n");

    srand((unsigned)time(NULL));
    int fortune = rand() % 4 + 1;

    //printf("%d\n", fortune);

    switch(fortune){
        case 1:
            printf("��g\n");
            break;
        case 2:
            printf("���g\n");
            break;
        case 3:
            printf("�g\n");
            break;
        default:
            printf("��\n");
    }

    // if(fortune == 1){
    //     printf("��g\n");
    // } else if(fortune == 2){
    //     printf("���g\n");
    // } else if(fortune == 3){
    //     printf("�g\n");
    // } else {
    //     printf("��\n");
    // }

    return 0;
}