#include <stdio.h>

int power(int x, int y);

int main(void){

    int sum = 1;

    for(int i = 1; i <= 10; i++){   // 1�`10�̊K��
        sum = power(sum, i);

    }

    printf("���ʂ�%d�ł�\n", sum);

    return 0;
}

int power(int x, int y){
    
    int ans = x * y;
    
    return ans; // return x * y; �ł�ok
}