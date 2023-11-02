#include <stdio.h>

void funcA(void);
void funcB(void);

int main(void){
    funcA();

    return 0;
}

void funcA(void){
    printf("ä÷êîAÇ≈Ç∑\n");
    funcB();
}

void funcB(void){
    printf("ä÷êîBÇ≈Ç∑\n");
}
