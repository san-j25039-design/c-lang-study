#include <stdio.h>
//コード10-4 配列を準備して返す関数を利用(不具合あり)
int* readyAges(void){
    int ages[4];//配列の作成
    return ages;//その先頭アドレスを返す
}

int main(void)
{
    int* a = readyAges();//配列の作成を依頼
    a[0] = 20;//なぜかその領域を使ってしまう
    return 0;
}