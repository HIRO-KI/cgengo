#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void){
    String answerNo;

    printf("�������悭�čō��ȁAC����j�q�̖��O�́H\n");
    printf("�P�F�~�i�g�@�Q�F�~�T�L�@�R�F�c�o�T�@�S�F�~�T�G\n");
    scanf("%s", answerNo);

    int n = atoi(answerNo);

    if(n == 2) {
        printf("�吳���I�@����ڂ���ˁI\n");
    } else {
        printf("�c�O�B\n");
    }

    return 0;
}