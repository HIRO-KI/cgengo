#include <stdio.h>

int main(void){
    int a,b,c;
    a = 100;
    b = 100;
    c = 100;
    a++;    //　インクリメント
    b--;    //  デクリメント
    c += 10;    //  c = c+10

    printf("インクリメント　%d\n", a);
    printf("デクリメント　%d\n", b);
    printf("%d\n", c);

    return 0;
}