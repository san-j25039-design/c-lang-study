#include <stdio.h>
//コード9-4 アドレスからint型で情報を取り出す
int main(void)
{
    int a = 70;
    printf("変数aには%dが入っている\n", a);//変数aには70が入っている

    int* addrA = &a;//aのアドレスを保持する変数
    printf("変数aのアドレスは%p\n", addrA);//アドレスを表示
    printf("%p番地に格納されている情報:%d\n", addrA, *addrA);
    //今度はエラーにならない(int型により4バイト分だと分かるため)
    return 0;
}