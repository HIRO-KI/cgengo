#include <stdio.h>

int main(void){
    int age = 29;

    printf("���N%d�΂ŁA���N%d�΂ł���\n", age, age + 1);

    printf("%5d\n", 123);   //  5�X�y�[�X���Ƃ��ĉE�l�ɐ���������
    printf("%05d\n", 123);  //  5�X�y�[�X���Ƃ��ĉE�l�ɐ��������󂢂��X�y�[�X��0������

    return 0;
}