#include <stdio.h>

int main(void){

    int sum = 0;

    for(int i = 0; i <= 1000; i++){

        if(i % 2 != 0){

            sum += i;
        }
    }
    printf("1から1000までの奇数の和は、%dです。\n", sum);

    return 0;
}