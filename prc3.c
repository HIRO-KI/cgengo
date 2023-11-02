#include <stdio.h>

int main(void){
    for(int i = 0; i < 1000; i++){
        if(i % 3 == 0){
            printf("%3d ", i);
        }
    }

    return 0;
}