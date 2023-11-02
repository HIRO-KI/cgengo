#include <stdio.h>
#include <string.h>

int main(void){

    int a[4] = {19, 20, 29, 29};
    int b[4];

    memset(b, 0, 16);   // bを0で16バイト分初期化する    
    memcpy(b, a, 16);   //aをbにコピー
    printf("配列aの2つ目の要素は：%d, %p番地に格納\n", a[1], &a[1]);

    printf("配列bの2つ目の要素は：%d, %p番地に格納\n", b[1], &b[1]);

    int r = memcmp(a, b, 16);

    if(r == 0){
        printf("memcmpで比較した結果、等しいです\n");
    }
    if(a == b){
        printf("==演算子で比較した結果、等しいです\n");
    }

    return 0;
}