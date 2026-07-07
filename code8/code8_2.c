#include <stdio.h>
//コード8-1 シンプルな関数を定義する
void hello(void)
{
    printf("こんにちは\n");
}

int main(void){
    printf("関数を呼び出します\n");
    hello();
    return 0;
}