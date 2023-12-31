// 1から7までの整数を入力すると、それに対応した曜日を出力する
#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){

    string s;

    printf("以下の対応した曜日を出力します。\n");
    printf("1:月曜日　2:火曜日　3:水曜日　4:木曜日　5:金曜日　6:土曜日　7:日曜日\n");

    printf("整数を入力してください。\n");
    scanf("%s", s);

    int day = atoi(s);

    switch (day){
        case 1:
            printf("月曜日\n");
            break;
        
        case 2:
            printf("火曜日\n");
            break;

        case 3:
            printf("水曜日\n");
            break;

        case 4:
            printf("木曜日\n");
            break;

        case 5:
            printf("金曜日\n");
            break;

        case 6:
            printf("土曜日\n");
            break;

        case 7:
            printf("日曜日\n");
            break;
        
        default:
            printf("入力が間違っています。\n");
    }

    return 0;
}