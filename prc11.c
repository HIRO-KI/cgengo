#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    string s;

    printf("0‚©‚ç10‚Ü‚Å‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%s",s);

    int n = atoi(s);

    if(n <= 10 && 0 <= n){
        printf("³‰ğ‚Å‚·B\n");

    } else {
        printf("ŠÔˆá‚¢‚Å‚·B\n");
    }

    return 0;
}