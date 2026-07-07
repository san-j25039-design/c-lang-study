#include <stdio.h>
#include <stdlib.h>
//コード11-3 3つの手段を使って文字列のメモリを確保する
typedef char String[1024];

int main(void)
{
    //手段１　配列宣言
    char array[1024] = c;
    char* msg1 = array;//先頭アドレスの取得
    printf("%s\n", msg1);//それの表示

    //手段２　malloc
    char* msg2 = (char*)malloc(1024);
    msg2[0] = 'C';
    msg2[1] = '\0';
    printf("%s", msg2);
    free(msg2);//領域の解放

    //手段３　リテラル
    const char* msg3 = "C";//リテラルによるメモリの確保
    printf("%s", msg3);

    return 0;
}