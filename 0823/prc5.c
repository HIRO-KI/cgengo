#include <stdio.h>

void findMinMax(int* x, int y, int* max, int* min);

int main(void){

    int num[] = {12, 34, 8, 45, 22, 3, 29, 55, 1, 5};
    int max,min;

    printf("%lu\n", sizeof(num) );	// �z��̃T�C�Y
    printf("%lu\n", (sizeof(num) / sizeof(num[0]) ) );	// �z��̗v�f��

    findMinMax(num, (sizeof(num) / sizeof(num[0])), &max, &min);

    printf("�ŏ��l��%d�ł��B\n", min);        
    printf("�ő�l��%d�ł��B\n", max);


    return 0;
}

void findMinMax(int* x, int y, int* max, int* min){

    *max = x[0];
    *min = x[0];
    
    for(int i = 0; i < y; i++){

        if(*max < x[i]){
            *max =  x[i];
        }

        if(*min > x[i]){
            *min =  x[i];
        }
    }
    // printf("�ŏ��l��%d�ł��B\n", min);        
    // printf("�ő�l��%d�ł��B\n", max);
}