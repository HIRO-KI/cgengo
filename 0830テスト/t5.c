#include <stdio.h>

int main(void){

    int scores[5] = {92, 88, 85, 98, 100};
    int max = scores[0];
    int min = scores[0];
    int sum = 0;
    double ave = 0;

    for(int i = 0; i < 5; i++){

        sum += scores[i];

        if(max < scores[i]){

            max = scores[i];

        } else if(scores[i] < min){

            min = scores[i];
        }
    }
    printf("最高点は%dです。\n", max);
    printf("最低点は%dです。\n", min);
    printf("合計点は%dです。\n", sum);

    ave = sum / 5.0;

    printf("最高点は%.2fです。\n", ave);

    return 0;
}