#include <stdio.h>

int culcsum(int a);

int main(void){
    int ret = 0;

    ret = culcsum(100);
    printf("1����100�܂ł̘a��%d�ł��B\n", ret);

    ret = culcsum(1000);
    printf("1����1000�܂ł̘a��%d�ł��B\n", ret);

    ret = culcsum(500);
    printf("1����500�܂ł̘a��%d�ł��B\n", ret);

    return 0;
}

int culcsum(int a){
    int ans = 0;
        
    for(int i = 0; i <= a; i++){
        ans += i;
    }

    return ans;
}