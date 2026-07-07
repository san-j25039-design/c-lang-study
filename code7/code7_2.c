#include <stdio.h>
//コード7-2 配列の要素に値を代入して表示
int main(void)
{
    int gems[10]; //要素数10の配列を作成
    gems[1] = 3;
    printf("%d\n", gems[1]);//3と表示される
    return 0;
}