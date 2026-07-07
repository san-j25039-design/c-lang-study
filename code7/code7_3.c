#include <stdio.h>
//コード7-3 初期化してない変数を利用すると？
int main(void)
{
    int i;
    printf("変数iの内容：%d\n",i);//でたらめな値が表示される
    int a[5];
    printf("配列aの要素[0]の内容：%d\n", a[0]);//これもでたらめな値が表示される
    return 0;
}