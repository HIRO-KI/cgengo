#include <stdio.h>

int main(void){

    int kuku[9][9] = {0};

    printf("九九をを出力します\n");

    for(int i = 0; i < 9; i++){
        //printf("%dの段：", i + 1);

        for(int j = 0; j < 9; j++){

            kuku[i][j] = (i + 1) * (j + 1);
            printf("%d\t", kuku[i][j]);
        }
        printf("\n");
    }

    return 0;
}