#include <stdio.h>
//コード9-1 アドレス情報を格納する
int main(void)
{
    int a = 70;
    printf("変数aには%dが入っている\n", a);//変数aには70が入っている

    long addrA = (long)&a;//aのアドレスを保持する変数
    printf("変数aのアドレスは%ld\n", addrA);//アドレスを表示
    return 0;
}