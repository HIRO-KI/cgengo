#include <stdio.h>

int fibonacci(int x);

int main(void){

    int n;

    printf("��������͂��Ă��������B\n");
    scanf("%d", &n);

    int num = fibonacci(n);

    printf("%d�Ԗڂ̃t�B�{�i�b�`���́A%d�ł��B\n", n, num);


    return 0;
}

int fibonacci(int x){

    int a = 0;
    int b = 1;
    int c;

    if(x == 1){
        return 1;
    } else {

        for(int i = 1; i < x; i++){        

            c = a + b;
            a = b;
            b = c;
        }
    }
    return c;
}