#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    string s[5] = {0};
    int scores[5] = {0};
    int sum = 0;

    for(int i = 0; i < 5; i++){
        printf("科目%dの点数を入力してください。\n", i + 1);
        scanf("%s", s[i]);

        sum += atoi(s[i]);
    }
    printf("5科目の合計点は、%d点です。\n", sum);

    printf("平均点は、%.2f点です。\n", sum / 5.0);

    return 0;
}