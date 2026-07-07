#include <stdio.h>
#include <stdbool.h> //bool型を使うならこれが必要
//コード4-1 天気による行動の変化をC言語で表現
int main(void)
{
    bool tenki = true; //boolは真偽値を扱う変数
    if(tenki == true){
        printf("散歩に行きます\n");
    }else{
        printf("おうちでダラダラ\n");
    }
    return 0;
}