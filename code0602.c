#include <stdio.h>

typedef char string[1024];

int main(void){
    typedef struct{
        string name;
        int hp;
        int attack;
    } Monster;

    Monster seiryu = {"��", 100, 10};  // �������ɂ������OK
    Monster suzaku = {"�鐝", 100, 20};
    Monster byakko = {"����", 100, 30};
    Monster genbu = {"����", 100, 40}; 

    printf("%s�̍U���́F%d", seiryu.name, seiryu.attack);

    return 0;
}