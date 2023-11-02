#include <stdio.h>
#include <stdlib.h>

typedef char String[1024];

int main(void){
    int temp = 30;
    int answerNo = 1;
    String n;

    while(answerNo == 1){
        printf("現在の設定温度：%d\n", temp);

        printf("暑いですか？　YES=1　NO=0\n");
        scanf("%s", n);
        
        answerNo = atoi(n);
        
        if(answerNo == 1){
            temp --;
        }
        
    }
    printf("設定を終了します\n");

    return 0;
}