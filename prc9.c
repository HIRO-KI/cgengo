#include <stdio.h>

int main(void){

    int count = 0;

    printf("2000�N����2030�N�܂ł̂��邤�N�����߂܂��B\n");

    for(int i = 2000; i <= 2030; i++){
        if(i % 4 == 0){
            if(i % 100 != 0 || i % 400 == 0){
                printf("%d�N\n", i);

                count++;
            }
        }
    }
    printf("�ȏ��%d���ł��B", count);

    return 0;
}