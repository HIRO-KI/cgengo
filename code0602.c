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

    printf("%sÌUÍF%d", seiryu.name, seiryu.attack);

    return 0;
}