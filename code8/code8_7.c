#include <stdio.h>
//コード 引数を定めてない関数
void hello(){ //()内にvoidを書き忘れている
    printf("こんにちは\n");
}
int main(void)
{
    hello();
    return 0;
}