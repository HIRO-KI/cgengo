#include <stdio.h>

int main(void){

    int n[5] = {0};
    int i;

    printf("��������͂��Ă��������B�i5��j\n");

    for(i = 0; i < 5; i++){
        scanf("%d", &n[i]);
    }

    printf("�����́A");

    for(i = 0; i < 5; i++){

        if(n[i] %2 == 0){
            printf("%d ", n[i]);
        }
    }
    printf("�ł��B\n");

    printf("��́A");

    for(i = 0; i < 5; i++){

        if(n[i] %2 != 0){
            printf("%d ", n[i]);
        }
    }
    printf("�ł��B\n");

    return 0;
}