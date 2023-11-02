// 1‚©‚ç7‚Ü‚Å‚Ì®”‚ğ“ü—Í‚·‚é‚ÆA‚»‚ê‚É‘Î‰‚µ‚½—j“ú‚ğo—Í‚·‚é
#include <stdio.h>
#include <stdlib.h>

typedef char string[1024];

int main(void){

    string s;

    printf("ˆÈ‰º‚Ì‘Î‰‚µ‚½—j“ú‚ğo—Í‚µ‚Ü‚·B\n");
    printf("1:Œ—j“ú@2:‰Î—j“ú@3:…—j“ú@4:–Ø—j“ú@5:‹à—j“ú@6:“y—j“ú@7:“ú—j“ú\n");

    printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    scanf("%s", s);

    int day = atoi(s);

    switch (day){
        case 1:
            printf("Œ—j“ú\n");
            break;
        
        case 2:
            printf("‰Î—j“ú\n");
            break;

        case 3:
            printf("…—j“ú\n");
            break;

        case 4:
            printf("–Ø—j“ú\n");
            break;

        case 5:
            printf("‹à—j“ú\n");
            break;

        case 6:
            printf("“y—j“ú\n");
            break;

        case 7:
            printf("“ú—j“ú\n");
            break;
        
        default:
            printf("“ü—Í‚ªŠÔˆá‚Á‚Ä‚¢‚Ü‚·B\n");
    }

    return 0;
}