#include <stdio.h>

int checkEven(int x);

int main(void){

    int s;

    printf("整数を入力してください。\n");
    scanf("%d", &s);

    checkEven(s);


    return 0;
}

int checkEven(int x){

    if(x % 2 == 0){
        printf("%dは、偶数です。\n", x);
    } else if(x % 2 != 0){
        printf("%dは、奇数です。\n", x);
    } else {
        printf("入力が間違っています。\n");
    }

}