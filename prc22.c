#include <stdio.h>

void swap(int* x, int* y);

int main(void){

    int a = 5;
    int b = 10;

    printf("a(%d)‚Æb(%d)‚Ì’l‚ð“ü‚ê‘Ö‚¦‚Ü‚·\n", a, b);

    swap(&a, &b);

    printf("Œ‹‰Ê‚Ía = %d b = %d ‚Å‚·\n", a, b);

    return 0;
}

void swap(int* px, int* py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}