#include <stdio.h>

int min(int x, int y, int z);

int main(void){

    int num[3];

    for(int i = 0; i < 3; i++){

        printf("%d�Ԗڂ̐�������͂��Ă��������B\n", i + 1);
        scanf("%d", &num[i]);
    }

    int ans = min(num[0], num[1], num[2]);

    printf("�ŏ��l��%d�ł��B\n", ans);

    return 0;
}

int min(int x, int y, int z){

    if(x < y && x < z){
        return x;

    } else if(y < x && y < z){
        return y;

    } else {
        return z;
        
    }
}