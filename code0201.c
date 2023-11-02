#include <stdio.h>

int main (void){
    int age;
    age = 30;
    printf("%d\n", age);

    printf(" int: %dバイト\n", (int)(sizeof(int)));
    printf("long: %dバイト\n", (int)(sizeof(long)));

    return 0;
}