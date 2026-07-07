#include <stdio.h>
//コード8-6 2つの引数を渡す
void add(int x, int y){
    int ans = x + y;
    printf("%d + %d = %d\n", x, y, ans);
}
int main(void)
{
    int year = 2026;
    add(year, 4);//2026 + 4 = 2030
    add(year, year);//2026 + year = 4052
    return 0;
}