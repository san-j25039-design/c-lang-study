#include <stdio.h>
//コード8-5 1つの引数を渡す
typedef char String[1024];

void hello(String name){
    printf("%sさん、こんにちは\n", name);
}

int main(void)
{
    hello("望月"); //望月さん、こんにちは
    return 0;
}