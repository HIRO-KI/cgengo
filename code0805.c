#include <stdio.h>

typedef char string[1024];

// �v���g�^�C�v�錾
void hello(string name);

int main(void){
    printf("�֐����Ăяo���܂�\n");

    hello("��");
    hello("�ԏ�");
    hello("�C��");

    printf("�֐��̌Ăяo�����I���܂���\n");


    return 0;
}

void hello(string name){
    printf("%s����A����ɂ���\n", name);
}