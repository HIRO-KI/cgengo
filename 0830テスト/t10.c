#include <stdio.h>
#include <string.h>

void reverseString(char str[]);

int main(void){

    char input[1024];

    printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%s", input);

    reverseString(input);

    return 0;
}

void reverseString(char str[]){

    int x = strlen(str);
    int a = x - 1;
    char re[1024] = {0};

    for(int i = 0; i < x; i++){
        re[i] = str[a];
        a--;
    }
    printf("”½“]‚µ‚½•¶š—ñ‚Í%s\n", re);
}