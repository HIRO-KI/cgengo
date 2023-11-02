// 1から100までの奇数を合計するプログラム
#include <stdio.h>

int main(void){
    int sum = 0;
    for(int i = 0; i <= 100; i++){
        if(i % 2 != 0){
            sum = sum + i;  // sum += i;もok
        }
    }
    printf("1から100までの奇数の合計は、%dです\n", sum);

    return 0;
}