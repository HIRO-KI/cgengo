#include <stdio.h>

int main(void){

    int n = 0;
    int sum = 1;
    printf("��������͂��Ă��������B\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        sum = sum * (n - i);
        // sum = sum * i;      
    }

    printf("%d�̊K���%d�ł��B\n", n, sum);

    return 0;
}