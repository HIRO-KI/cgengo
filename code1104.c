#include <stdio.h>
#include <string.h>

typedef char strig[1024];

int main(void){

    char str[1024] = "c language";
    int len =strlen(str);

    printf("%d\n", len);

    char str1[] = "hello\0ABC";
    char str2[] = "hello\0DEF";
    if(strcmp(str1, str2) == 0){
        printf("•¶Žš—ñ‚Æ‚µ‚Ä“™‚µ‚¢\n");
    }

    char str3[] = "XYZ";
    strcpy(str1, str3);
    printf("%s\n", str1);

    strcat(str, str3);
    printf("%s\n", str);

    return 0;
}