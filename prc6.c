// 1����100�܂ł̊�����v����v���O����
#include <stdio.h>

int main(void){
    int sum = 0;
    for(int i = 0; i <= 100; i++){
        if(i % 2 != 0){
            sum = sum + i;  // sum += i;��ok
        }
    }
    printf("1����100�܂ł̊�̍��v�́A%d�ł�\n", sum);

    return 0;
}