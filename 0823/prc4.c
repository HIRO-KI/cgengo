#include <stdio.h>

int fibonacci(int x);

int main(void){

    int n;

    printf("整数を入力してください。\n");
    scanf("%d", &n);

    int num = fibonacci(n);

    printf("%d番目のフィボナッチ数は、%dです。\n", n, num);


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