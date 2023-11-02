#include <stdio.h>

int main(void){

    for(int row = 9; row > 0; row--){
        for(int col = 9; col > 0; col--){

            printf("%2d\t", row * col);
        }
        printf("\n");
    }

    return 0;
}