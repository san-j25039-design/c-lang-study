#include <stdio.h>
//コード8-4 プロトタイプ宣言

void FuncA(void);
void FuncB(void); //あらかじめ宣言しておく

int main(void)
{
    FuncA();
    return 0;
}
void FuncA(void){
    printf("関数Aです\n");
    FuncB();
}
void FuncB(void){
    printf("関数Bです\n");
}
