#include <stdio.h>

int main(void){

    int score;

    printf("���Ȃ��̐��т���͂��Ă��������B\n");
    scanf("%d", &score);

    if(80 <= score){
        printf("���Ȃ��̐��т͗D�ł��B\n");

    } else if(60 <= score && score < 80){
        printf("���Ȃ��̐��т͗ǂł��B\n");

    } else {
        printf("���Ȃ��̐��т͉ł��B\n");

    }

    return 0;
}