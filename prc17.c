#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){

    int kuku[9][9] = {0};
    string f, s;
    int iti, ni;

        for(int i = 0; i < 9; i++){

            for(int j = 0; j < 9; j++){

             kuku[i][j] = (i + 1) * (j + 1);
             }
        }
        printf("Å‰‚Ì®”1Œ…‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
        scanf("%s", f);

        iti = atoi(f);

        printf("ŽŸ‚Ì®”1Œ…‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
        scanf("%s", s);

        ni = atoi(s);

        printf("%d X %d = %d‚Å‚·B", iti, ni, kuku[iti - 1][ni - 1]);

    return 0;
}