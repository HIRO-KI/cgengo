#include <stdio.h>

int main(void){

    int n = 0;
    int sum = 1;
    printf("整数を入力してください。\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        sum = sum * (n - i);
        // sum = sum * i;      
    }

    printf("%dの階乗は%dです。\n", n, sum);

    return 0;
}