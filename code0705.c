#include <stdio.h>

int main(void){

    int scores[5] = {75, 57, 90, 46, 82};
    int sum = 0;

    for(int i = 0; i < 5; i++){

        sum += scores[i];
    }
    printf("���v�_�́A%d�_�ł��B\n", sum);

    printf("���ϓ_�́A%.2f�_�ł��B\n", sum / 5.0);

    return 0;
}