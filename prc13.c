#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    string s;

    printf("成績を入力してください\n");
    scanf("%s", s);

    int x = atoi(s);

    switch (x){
    case 1:
        printf("成績は1です。\nもっとがんばりましょう。\n");
        break;

    case 2:
        printf("成績は2です。\nもう少しがんばりましょう。\n");
        break;

    case 3:
        printf("成績は3です。\nさらに上を目指しましょう。\n");
        break;

    case 4:
        printf("成績は4です。\nたいへんよくできました。\n");
        break;

    case 5:
        printf("成績は5です。\nたいへん優秀です。\n");
        break;
    
    default:
        printf("入力が間違っています。\n");
        break;
    }

    return 0;
}