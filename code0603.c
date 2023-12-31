#include <stdio.h>

typedef char string[1024];

int main(void){
    typedef struct{
        string name;
        int hp;
        int attack;
    } Monster;

    Monster seiryu = {"Â´", 100, 10};  // ú»ÉæéãüÍOK
    Monster suzaku = {"é", 100, 20};
    Monster byakko = {"Õ", 100, 30};
    Monster genbu = {"º", 100, 40}; 

    const string TEMPLATE = "%s@F@HP = %3d UÍ = %2d\n";

    printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);
    printf(TEMPLATE, suzaku.name, suzaku.hp, suzaku.attack);
    printf(TEMPLATE, byakko.name, byakko.hp, byakko.attack);
    printf(TEMPLATE, genbu.name, genbu.hp, genbu.attack);

    return 0;
}