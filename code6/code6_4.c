#include <stdio.h>
//コード6-4 構造体を加算したいが(エラー)
int main(void)
{
    typedef struct{
        int x;
        int y;
    }point;

    point p1 = {50,70};
    p1++; //ここでエラーが発生する
    return 0;
}