#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));

    int a,b,c,d;
    a = rand() % 10;
    b = rand() % 10;
    c = rand() % 10;
    d = rand() % 10;

    printf("4���̈Ïؔԍ��𐶐����܂��B\n");
    printf("�Ïؔԍ��F%d%d%d%d\n", a, b, c, d);

    return 0;
}