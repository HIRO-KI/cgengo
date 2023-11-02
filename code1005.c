#include <stdio.h>
#include <stdlib.h>

int* readyAges(void){

    int* ages = (int*) malloc(16);
    return ages;
}

int main(void){

    int* a = readyAges();
    
    if(a == NULL){
        printf("ヒープ確保に失敗しました\n");
    }else{
        printf("ヒープ確保に成功しました\n");
        a[0] = 19;
        free(a);
    }
    
    return 0;
}