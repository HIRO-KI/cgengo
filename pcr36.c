#include <stdio.h>

void kuku(int n);

int main(void){

    int n;

    printf("�o�͂�����̒i����͂��Ă��������B\n");
    scanf("%d", &n);

    kuku(n);

    return 0;
}

void kuku(int n){
    printf("%d�̒i���o�͂��܂��B\n", n);

    for(int i = 1; i <= 9; i++){
        printf("%2d ", n * i);
    }

}