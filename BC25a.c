#include <stdio.h>

int main(void){
    int sum = 0;

    for(int i = 0; i <= 1000; i++){
        sum = sum + i;

    }
    printf("1から1000までの和は：%d\n", sum);

    return 0;
}