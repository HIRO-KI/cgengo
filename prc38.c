#include <stdio.h>

int main(void){

    int n[5];
    int s;
    int i = 0;

    printf("��������͂��Ă��������B�i5��j\n");

    for(i; i < 5; i++){

        scanf("%d", &s);
        *(n + i) = s;
    }

    printf("�t���ŏo�͂��܂��B\n");

    for(i = 4; i >= 0; i--){
        printf("%d \n", *(n + i));

    }
    return 0;
}