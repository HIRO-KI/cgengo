#include <stdio.h>

int main(void){

    int sum = 0;

    for(int i = 0; i <= 1000; i++){

        if(i % 2 != 0){

            sum += i;
        }
    }
    printf("1����1000�܂ł̊�̘a�́A%d�ł��B\n", sum);

    return 0;
}