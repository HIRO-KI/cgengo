#include <stdio.h>
#include <stdbool.h>

int main(void){

    printf("いただきます\nバナナを食べます\n");

    //bool more = true;
    bool more = false;

    if(more){
        printf("おかわりをください\n");

    } else {
        printf("おなかがいっぱいです\n");
        printf("ごちそうさまでした\n");
    }
    
    return 0;
}