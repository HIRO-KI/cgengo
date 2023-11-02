#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    
    string s;

    printf("o—Í‚·‚é*‚ÌŒÂ”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%s", s);

    int n = atoi(s);

    for(int i = 0; i < n; i++){
        printf("*");
    }

    printf("\n");

    return 0;
}