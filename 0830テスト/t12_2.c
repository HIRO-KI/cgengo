//�@�c�ʂ��瑖�s�������v�Z���Ă����A�v��

#include <stdio.h>

int main(void){

    int nenpi = 20; // 1L������̑��s������ݒ�
    int max = 40; // ���̎Ԃ̍ő�e��
    int oil;
    int price;

    printf("���݂̔R���c�ʂ���͂��Ă��������B\n");
    scanf("%d", &oil);

    printf("���݂̔R�����i����͂��Ă��������B\n");
    scanf("%d", &price);

    int a = oil * nenpi;

    printf("����%d �L�����s�\�ł��B\n", a);

    int b = max - oil;
    int c = (max - oil * price);
    printf("%d���b�g�������\�ŁA���悻%d�~������܂��B\n", b, c);

    return 0;
}