#include <stdio.h>

int main(void){
    int age = 29;

    printf("今年%d歳で、来年%d歳ですね\n", age, age + 1);

    printf("%5d\n", 123);   //  5個スペースをとって右詰に数字を入れる
    printf("%05d\n", 123);  //  5個スペースをとって右詰に数字を入れ空いたスペースに0が入る

    return 0;
}