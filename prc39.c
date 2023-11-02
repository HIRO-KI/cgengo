#include <stdio.h>

int main(void){

    int n[10] = {12, 34, 8, 45, 22, 3, 29, 55, 1, 5};
    int x, max,i;
    int a = 0;

    for(i = 0; i < 10; i++){
        if(max < n[i]){
            max = n[i];
        }
    }
    x = max;

    for(i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){

            if(a < n[j] && x > n[j]){
                x = n[j];
            }
        }

        printf("%d \n", x);
        a = x;
        x = max;
    }

    return 0;
}