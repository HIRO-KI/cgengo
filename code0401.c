#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool tenki = true;
    //  bool tenki = false;

    if(tenki){  //  天気が晴れだったら
        printf("洗濯をします\n");
        printf("散歩にいきます\n");
    } else {            //  晴れ以外だったら
        printf("映画を観ます\n");
    }

    return 0;
}