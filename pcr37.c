#include <stdio.h>

int max(int x, int y);

int main(void){
    int x = 10;
    int y = 20;
    int z = 30;

    int n = max(x, y);
    
    n = max(n, z);

    printf("Å‘å’l‚Í%d‚Å‚·B\n", n);

    return 0;
}


int max(int x, int y){

    if(x < y){
        return y;
    } else {
        return x;
    }
}