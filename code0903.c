#include <stdio.h>

int main(void){
    int a = 70;
    printf("�ϐ�a�ɂ�70�������Ă��܂�\n");

    int* addrA = &a;

    a = 100;
    printf("�ϐ�a�̃A�h���X�F%p\n", addrA);
    printf("%p�Ԓn�Ɋi�[����Ă�����F%d\n", addrA, *addrA);

    return 0;
}