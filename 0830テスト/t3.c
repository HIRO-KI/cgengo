#include <stdio.h>

int main(void){

    int sum = 0;

    for(int i = 0; i <= 1000; i++){

        if(i % 2 != 0){

            sum += i;
        }
    }
    printf("1‚©‚ç1000‚Ü‚Å‚ÌŠï”‚Ì˜a‚ÍA%d‚Å‚·B\n", sum);

    return 0;
}