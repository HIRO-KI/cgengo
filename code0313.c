#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));

    int r = rand() % 100;   //  0~99‚Ì‚¢‚¸‚ê‚©‚Ì®”‚ª‘ã“ü‚³‚ê‚é

    printf("‚ ‚È‚½‚Í‚½‚Ô‚ñA%dÎ‚Å‚·‚ËH\n", r);

    return 0;
}