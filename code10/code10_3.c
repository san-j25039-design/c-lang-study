#include <stdio.h>
#include <string.h>
//コード10-3 配列を手軽にコピーする
int main(void)
{
    int a[4] = {19,20,29,29};
    int b[4] = {19,20,29,29};
    int r = memcmp(a,b,16);//aからb16ビットとbから16ビットを比較
    if(r == 0){
        printf("memcmpで比較した結果、等しいです\n");
        //等価判定なので表示される
    }
    if(a = b){
        printf("==演算子で比較した結果、等しいです\n");
        //等値判定なので表示されない
    }
    return 0;
}