#include <stdio.h>

double calcAverage(int x, int y);

int main(void){

    int a, b;

    printf("®”‚ğ2‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

    scanf("%d", &a);
    scanf("%d", &b);

    double ave = calcAverage(a, b);

    printf("2‚Â‚Ì•½‹Ï’l‚Í%.2f‚Å‚·B\n", ave);

    return 0;
}

double calcAverage(int x, int y){

    return  (x + y) / 2.0;
}