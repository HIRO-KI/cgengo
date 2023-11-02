#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void){
    printf("三角形の面積を求めます。\n");

    String a;
    printf("底辺の長さを入力してください。\n");
    scanf("%s", a);

    String h;
    printf("高さを入力してください。\n");
    scanf("%s", h);

    //double s = atoi(a) * atoi(h) / 2.0;

    int aa = atoi(a);
    int hh = atoi(h);
    //double s = x * z / 2.0;
    printf("面積は%.2fです。\n", aa * hh / 2.0);

    return 0;
}