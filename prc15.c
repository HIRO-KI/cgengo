#include <stdio.h>

int main(void){
    char x[100] = {0};
    int i = 0;

    printf("文字を入力してください。\n");
    scanf("%s", x);

    for(i = 0; x[i] != '\0'; i++){

    }
    printf("文字の長さは%dです。\n", i);


    return 0;
}