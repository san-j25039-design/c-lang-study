#include <stdio.h>
#include <string.h>
//コード10-2 配列を手軽にコピーする
int main(void)
{
    int a[4] = {19,20,29,29};
    int b[4];
    memcpy(b,a,16);//aから16ビットをbにコピー
    printf("配列aの2番目は%d,%p番地に格納\n", a[1],&a[1]);
    printf("配列bの2番目は%d,%p番地に格納\n", b[1],&b[1]);
    //どちらも要素は20,ただ番地は異なる
    return 0;
}