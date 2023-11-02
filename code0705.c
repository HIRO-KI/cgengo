#include <stdio.h>

int main(void){

    int scores[5] = {75, 57, 90, 46, 82};
    int sum = 0;

    for(int i = 0; i < 5; i++){

        sum += scores[i];
    }
    printf("合計点は、%d点です。\n", sum);

    printf("平均点は、%.2f点です。\n", sum / 5.0);

    return 0;
}