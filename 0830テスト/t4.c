#include <stdio.h>

int main(void){

    int score;

    printf("あなたの成績を入力してください。\n");
    scanf("%d", &score);

    if(80 <= score){
        printf("あなたの成績は優です。\n");

    } else if(60 <= score && score < 80){
        printf("あなたの成績は良です。\n");

    } else {
        printf("あなたの成績は可です。\n");

    }

    return 0;
}