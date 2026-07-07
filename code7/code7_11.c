#include <stdio.h>
//コード7-11 配列に別名を与える
int main(void)
{
    typedef int GemList[10];
    GemList gems;

    gems[1] = 3;
    printf("%d\n", gems[1]);//3
    return 0;
}