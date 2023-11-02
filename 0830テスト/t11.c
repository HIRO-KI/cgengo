#include <stdio.h>

void change(int* a, int* b);

int main(void){

    int x1, x2;

    printf("2つの値を入力してください。\n");
    scanf("%d", &x1);
    scanf("%d", &x2);

    change(&x1, &x2);

    printf("入れ替えると\n");
    printf("値1は%dとなりました。\n", x1);
    printf("値2は%dとなりました。\n", x2);

    return 0;
}

void change(int* a, int* b){

    int n = *a;
    *a = *b;
    *b = n;
}