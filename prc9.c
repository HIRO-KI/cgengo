#include <stdio.h>

int main(void){

    int count = 0;

    printf("2000年から2030年までのうるう年を求めます。\n");

    for(int i = 2000; i <= 2030; i++){
        if(i % 4 == 0){
            if(i % 100 != 0 || i % 400 == 0){
                printf("%d年\n", i);

                count++;
            }
        }
    }
    printf("以上の%d件です。", count);

    return 0;
}