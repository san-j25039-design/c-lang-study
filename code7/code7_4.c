#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//コード7-4 配列を使って宝石をランダムに表示する
int main(void)
{
    srand((unsigned)time(NULL));//乱数を使用するための準備
    enum{FIRE,WATER,WIND,EARTH};//宝石の属性
    int gems[10];//配列を作成

    //属性をランダムに決定
    for(int i=0; i < 10; i++){
        int gemType = rand()%4;
        gems[i]=gemType; //これで配列の各要素にランダムな値を代入できる
    }
    return 0;
}