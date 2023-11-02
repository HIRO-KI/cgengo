#include <stdio.h>

int main(void){
    const int TAX = 110;    // const =@’è”
    int fax = 50000;

    printf("50000‰~‚©‚ç40000‰~‚É’l‰º‚°‚µ‚Ü‚·\n");

    fax = 40000;
    printf("FAX‚ÌV‰¿Ši(Å)F%d‰~\n", fax * TAX / 100);

    return 0;
}