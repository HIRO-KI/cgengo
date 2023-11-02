#include <stdio.h>

void kuku(int n);

int main(void){

    int n;

    printf("出力する九九の段を入力してください。\n");
    scanf("%d", &n);

    kuku(n);

    return 0;
}

void kuku(int n){
    printf("%dの段を出力します。\n", n);

    for(int i = 1; i <= 9; i++){
        printf("%2d ", n * i);
    }

}