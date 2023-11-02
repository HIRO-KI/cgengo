#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE* fp;

    fp = fopen("memo.txt", "w");
    if(fp == NULL){
        printf("ファイルを開けませんでした\n");
        exit(1);  // エラーなら異常終了
    } else {
        printf("ファイルを開きました\n");
    }

    fputs("Hello!\n", fp);
    fputs("Goodbye!\n",fp);

    fclose(fp);

    return 0;
}