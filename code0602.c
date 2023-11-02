#include <stdio.h>

typedef char string[1024];

int main(void){
    typedef struct{
        string name;
        int hp;
        int attack;
    } Monster;

    Monster seiryu = {"Â—´", 100, 10};  // ‰Šú‰»‚É‚æ‚é‘ã“ü‚ÍOK
    Monster suzaku = {"é", 100, 20};
    Monster byakko = {"”’ŒÕ", 100, 30};
    Monster genbu = {"Œº•", 100, 40}; 

    printf("%s‚ÌUŒ‚—ÍF%d", seiryu.name, seiryu.attack);

    return 0;
}