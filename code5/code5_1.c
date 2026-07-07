#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//コード5-1 冗長でスッキリしない占いプログラム
int main(void)
{
    printf("あなたの運勢を占います\n");
    srand((unsigned)time(NULL));
    int fortune = rand() % 4 + 1; //1から4の乱数を作成
    if(fortune == 1){
        printf("大吉");
    }else if(fortune == 2){
        printf("中吉");
    }else if(fortune == 3){
        printf("吉");
    }else{
        printf("凶");
    }
    return 0;
}