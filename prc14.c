#include <stdio.h>

int main(void){

    int kuku[9][9] = {0};

    printf("‹ã‹ã‚ğ‚ğo—Í‚µ‚Ü‚·\n");

    for(int i = 0; i < 9; i++){
        //printf("%d‚Ì’iF", i + 1);

        for(int j = 0; j < 9; j++){

            kuku[i][j] = (i + 1) * (j + 1);
            printf("%d\t", kuku[i][j]);
        }
        printf("\n");
    }

    return 0;
}