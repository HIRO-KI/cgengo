#include <stdio.h>

int main(void){

    int n = 0;
    int sum = 1;
    printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        sum = sum * (n - i);
        // sum = sum * i;      
    }

    printf("%d‚ÌŠKæ‚Í%d‚Å‚·B\n", n, sum);

    return 0;
}