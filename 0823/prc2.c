#include <stdio.h>

int factorial(int y);

int main(void){

    int n;
    
    printf("��������͂��Ă��������B\n");
    scanf("%d", &n);

    int fac = factorial(n);

    printf("%d�̊K��́A%d�ł��B\n", n, fac);

    return 0;
}

int factorial(int y){

    int ans = 1;

    for(int i = 1; i <= y; i++){

        ans *= i;
    }
    return ans;
}