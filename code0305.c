#include <stdio.h>

int main(void){
    int a,b,c;
    a = 100;
    b = 100;
    c = 100;
    a++;    //�@�C���N�������g
    b--;    //  �f�N�������g
    c += 10;    //  c = c+10

    printf("�C���N�������g�@%d\n", a);
    printf("�f�N�������g�@%d\n", b);
    printf("%d\n", c);

    return 0;
}