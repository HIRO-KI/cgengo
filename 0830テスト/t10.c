#include <stdio.h>
#include <string.h>

void reverseString(char str[]);

int main(void){

    char input[1024];

    printf("���������͂��Ă��������B\n");
    scanf("%s", input);

    reverseString(input);

    return 0;
}

void reverseString(char str[]){

    int x = strlen(str);
    int a = x - 1;
    char re[1024] = {0};

    for(int i = 0; i < x; i++){
        re[i] = str[a];
        a--;
    }
    printf("���]�����������%s\n", re);
}