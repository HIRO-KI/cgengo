#include <stdio.h>

int calcsum(int a);

int main(void){
    int ret = 0;

    ret = calcsum(100);
    printf("1‚©‚ç100‚Ü‚Å‚Ì˜a‚Í%d‚Å‚·B\n", ret);

    return 0;
}

int calcsum(int a){
    if(a == 1){
        return 1;
    }else{
        return a + calcsum(a - 1);
    }
}