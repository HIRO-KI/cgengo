#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void){
    int temp = 30;
    int answerNo = 1;
    String n;

    while(answerNo == 1){
        printf("���݂̐ݒ艷�x�F%d\n", temp);

        printf("�����ł����H�@YES=1�@NO=0\n");
        scanf("%s", n);
        
        answerNo = atoi(n);
        
        if(answerNo == 1){
            temp --;
        }
        
    }
    printf("�ݒ���I�����܂�\n");

    return 0;
}