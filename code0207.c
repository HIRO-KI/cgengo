#include <stdio.h>

typedef char String[1024];  //　最大1000文字まで入る文字列型

int main(void){
    String monsterName = "ドラゴン";
    printf("敵は%s\n", monsterName);

    return 0;
}