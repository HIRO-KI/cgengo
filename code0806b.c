#include <stdio.h>

int add(int x, int y);

int main(void){
    
    int year = 2022;
    int ret = 0;
    ret = add(year, 4);
    //add(year, 50);

    printf("Œ‹‰Ê‚Í%d‚Å‚·\n", ret);

    return 0;
}

int add(int x, int y){
    int ans = x + y;
   // printf("%d + %d = %d\n", x, y, ans);

    return ans;
}