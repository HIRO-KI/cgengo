#include <stdio.h>
#include <string.h>

int main(void){

    int a[4] = {19, 20, 29, 29};
    int b[4];

    memset(b, 0, 16);   // b��0��16�o�C�g������������    
    memcpy(b, a, 16);   //a��b�ɃR�s�[
    printf("�z��a��2�ڂ̗v�f�́F%d, %p�Ԓn�Ɋi�[\n", a[1], &a[1]);

    printf("�z��b��2�ڂ̗v�f�́F%d, %p�Ԓn�Ɋi�[\n", b[1], &b[1]);

    int r = memcmp(a, b, 16);

    if(r == 0){
        printf("memcmp�Ŕ�r�������ʁA�������ł�\n");
    }
    if(a == b){
        printf("==���Z�q�Ŕ�r�������ʁA�������ł�\n");
    }

    return 0;
}