#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("あなたの運勢を占います\n");

    srand((unsigned)time(NULL));
    int fortune = rand() % 4 + 1;

    //printf("%d\n", fortune);

    switch(fortune){
        case 1:
            printf("大吉\n");
            break;
        case 2:
            printf("中吉\n");
            break;
        case 3:
            printf("吉\n");
            break;
        default:
            printf("凶\n");
    }

    // if(fortune == 1){
    //     printf("大吉\n");
    // } else if(fortune == 2){
    //     printf("中吉\n");
    // } else if(fortune == 3){
    //     printf("吉\n");
    // } else {
    //     printf("凶\n");
    // }

    return 0;
}