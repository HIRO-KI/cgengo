//　残量から走行距離を計算してくれるアプリ

#include <stdio.h>

int main(void){

    int nenpi = 20; // 1Lあたりの走行距離を設定
    int max = 40; // この車の最大容量
    int oil;
    int price;

    printf("現在の燃料残量を入力してください。\n");
    scanf("%d", &oil);

    printf("現在の燃料価格を入力してください。\n");
    scanf("%d", &price);

    int a = oil * nenpi;

    printf("あと%d キロ走行可能です。\n", a);

    int b = max - oil;
    int c = (max - oil * price);
    printf("%dリットル給油可能で、およそ%d円かかります。\n", b, c);

    return 0;
}