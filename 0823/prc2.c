#include <stdio.h>

int factorial(int y);

int main(void){

    int n;
    
    printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%d", &n);

    int fac = factorial(n);

    printf("%d‚ÌŠKæ‚ÍA%d‚Å‚·B\n", n, fac);

    return 0;
}

int factorial(int y){

    int ans = 1;

    for(int i = 1; i <= y; i++){

        ans *= i;
    }
    return ans;
}