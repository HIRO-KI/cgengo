#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){
    string s[5] = {0};
    int scores[5] = {0};
    int sum = 0;

    for(int i = 0; i < 5; i++){
        printf("�Ȗ�%d�̓_������͂��Ă��������B\n", i + 1);
        scanf("%s", s[i]);

        sum += atoi(s[i]);
    }
    printf("5�Ȗڂ̍��v�_�́A%d�_�ł��B\n", sum);

    printf("���ϓ_�́A%.2f�_�ł��B\n", sum / 5.0);

    return 0;
}