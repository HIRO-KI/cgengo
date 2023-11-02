#include <stdio.h>

int culcsum(int a);

int main(void){
    int ret = 0;

    ret = culcsum(100);
    printf("1‚©‚ç100‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B\n", ret);

    ret = culcsum(1000);
    printf("1‚©‚ç1000‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B\n", ret);

    ret = culcsum(500);
    printf("1‚©‚ç500‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B\n", ret);

    return 0;
}

int culcsum(int a){
    int ans = 0;
        
    for(int i = 0; i <= a; i++){
        ans += i;
    }

    return ans;
}