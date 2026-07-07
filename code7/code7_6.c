#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//コード7-6 ゴリ押しで宝石をランダムに並べる
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
    //次に、その内容を画面に表示する
    for(int i=0; i < 10; i++){
        int gemType = rand()%4;
        switch(gemType){
            case FIRE:
                printf("$");
                break;            
            case WATER:
                printf("*");
                break;            
            case WIND:
                printf("@");
                break;            
            case EARTH:
                printf("#");
                break;
        }
        printf(" ");
    }
    return 0;
}