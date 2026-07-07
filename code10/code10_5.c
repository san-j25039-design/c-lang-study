#include <stdio.h>
#include <stdlib.h>
//コード10-5 配列を準備して返す関数を利用(ヒープの活用)
int* readyAges(void){
    int* ages = (int*) malloc(16);//ヒープに16バイトを確保
    return ages;//その先頭アドレスを返す
}

int main(void)
{
    int* a = readyAges();//配列作成を依頼
    if(a == NULL){
        printf("ヒープ確保に失敗\n");
    }else{
        a[0] = 20;
        free(a);//使用済みのヒープ領域を解放
    }
    return 0;
}