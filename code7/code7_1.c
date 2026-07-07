#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//コード7-1 宝石をランダムに表示する
int main(void)
{
    srand((unsigned)time(NULL));//乱数を使用するための準備
    enum{FIRE,WATER,WIND,EARTH};//宝石の属性

    //属性をランダムに決定
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