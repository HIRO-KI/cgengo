#include <stdio.h>

int main(void){

    int n = 0;
    int max = 0;

    printf("��������͂��Ă��������B�i5��j\n");

    for(int i = 0; i < 5; i++){
        scanf("%d", &n);

        if(max < n){
            max = n;
        }
    }
    printf("�ő�l��%d�ł��B\n", max);

    return 0;
}