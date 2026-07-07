#include <stdio.h>
//コード8-10 add関数の戻り値を受け取る
int add(int x, int y){//ここで戻り値のint型を宣言する
    int ans = x + y;
    return ans; //ansを返す
}
int main(void)
{
    int year = 2026;
    int ans1 = add(year, 4);//2026 + 4 = 2030
    printf("今年の4年後は%d年です\n", ans1);
    return 0;
}