#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));

    int r = rand() % 100;   //  0~99のいずれかの整数が代入される

    printf("あなたはたぶん、%d歳ですね？\n", r);

    return 0;
}