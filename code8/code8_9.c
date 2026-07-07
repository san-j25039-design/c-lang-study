#include <stdio.h>
//コード8-9 処理の途中にreturn文のある関数
int add(int x, int y){//ここで戻り値のint型を宣言する
    int ans = x + y;
    return ans; //ansを返す

    printf("処理を終了します\n");//この文は実行されない
}
int main(void)
{
    int year = 2026;
    add(year, 4);//2026 + 4 = 2030
    add(year, year);//2026 + year = 4052
    return 0;
}