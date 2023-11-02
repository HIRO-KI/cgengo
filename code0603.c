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

    const string TEMPLATE = "%s�@�F�@HP = %3d �U���� = %2d\n";

    printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);
    printf(TEMPLATE, suzaku.name, suzaku.hp, suzaku.attack);
    printf(TEMPLATE, byakko.name, byakko.hp, byakko.attack);
    printf(TEMPLATE, genbu.name, genbu.hp, genbu.attack);

    return 0;
}