#include <stdio.h>
//コード9-2 アドレス情報をvoid型で格納する
int main(void)
{
    int a = 70;
    printf("変数aには%dが入っている\n", a);//変数aには70が入っている

    void* addrA = (void*)&a;//aのアドレスを保持する変数
    printf("変数aのアドレスは%p\n", addrA);//アドレスを表示
    return 0;
}