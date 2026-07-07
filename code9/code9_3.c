#include <stdio.h>
//コード9-3 アドレスから情報を取り出す(エラー)
int main(void)
{
    int a = 70;
    printf("変数aには%dが入っている\n", a);//変数aには70が入っている

    void* addrA = (void*)&a;//aのアドレスを保持する変数
    printf("変数aのアドレスは%p\n", addrA);//アドレスを表示
    printf("%p番地に格納されている情報:%d\n", addrA, *addrA);
    //何番地までを取り出すべきかわからないためエラー
    return 0;
}