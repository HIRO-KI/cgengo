#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool tenki = true;
    //  bool tenki = false;

    if(tenki){  //  �V�C�����ꂾ������
        printf("��������܂�\n");
        printf("�U���ɂ����܂�\n");
    } else {            //  ����ȊO��������
        printf("�f����ς܂�\n");
    }

    return 0;
}