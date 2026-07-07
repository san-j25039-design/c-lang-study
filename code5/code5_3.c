#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//コード5-3 あえてbreak文を書かないプログラム
int main(void)
{
    printf("あなたの運勢を占います\n");
    srand((unsigned)time(NULL));
    int fortune = rand() % 5 + 1; //1から5の乱数を作成

    switch(fortune){
        case 1:
        case 2: //ここであえてbreak文を入れない
            printf("大吉"); 
            break;
        case 3:
            printf("吉");
            break;
        default:
            printf("凶");
    }
    return 0;
}