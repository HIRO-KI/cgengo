#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE* fp;

    fp = fopen("memo.txt", "w");
    if(fp == NULL){
        printf("�t�@�C�����J���܂���ł���\n");
        exit(1);  // �G���[�Ȃ�ُ�I��
    } else {
        printf("�t�@�C�����J���܂���\n");
    }

    fputs("Hello!\n", fp);
    fputs("Goodbye!\n",fp);

    fclose(fp);

    return 0;
}