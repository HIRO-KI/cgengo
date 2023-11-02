#include <stdio.h>

int factorial(int y);

int main(void){

    int n;
    
    printf("整数を入力してください。\n");
    scanf("%d", &n);

    int fac = factorial(n);

    printf("%dの階乗は、%dです。\n", n, fac);

    return 0;
}

int factorial(int y){

    int ans = 1;

    for(int i = 1; i <= y; i++){

        ans *= i;
    }
    return ans;
}