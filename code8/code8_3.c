#include <stdio.h>
//コード8-3 main関数以外からの呼び出し
void FuncA(void){
    printf("関数Aです\n");
    FuncB();
}
void FuncB(void){
    printf("関数Bです\n");
}
int main(void)
{
    FuncA();
    return 0;
}