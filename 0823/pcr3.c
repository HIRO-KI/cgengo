#include <stdio.h>

int checkEven(int x);

int main(void){

    int s;

    printf("��������͂��Ă��������B\n");
    scanf("%d", &s);

    checkEven(s);


    return 0;
}

int checkEven(int x){

    if(x % 2 == 0){
        printf("%d�́A�����ł��B\n", x);
    } else if(x % 2 != 0){
        printf("%d�́A��ł��B\n", x);
    } else {
        printf("���͂��Ԉ���Ă��܂��B\n");
    }

}