#include <stdio.h>

int culcsum(int a);

int main(void){
    int ret = 0;

    ret = culcsum(100);
    printf("1から100までの和は%dです。\n", ret);

    ret = culcsum(1000);
    printf("1から1000までの和は%dです。\n", ret);

    ret = culcsum(500);
    printf("1から500までの和は%dです。\n", ret);

    return 0;
}

int culcsum(int a){
    int ans = 0;
        
    for(int i = 0; i <= a; i++){
        ans += i;
    }

    return ans;
}