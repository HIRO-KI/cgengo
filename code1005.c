#include <stdio.h>
#include <stdlib.h>

int* readyAges(void){

    int* ages = (int*) malloc(16);
    return ages;
}

int main(void){

    int* a = readyAges();
    
    if(a == NULL){
        printf("�q�[�v�m�ۂɎ��s���܂���\n");
    }else{
        printf("�q�[�v�m�ۂɐ������܂���\n");
        a[0] = 19;
        free(a);
    }
    
    return 0;
}