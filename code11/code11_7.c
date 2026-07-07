#include <stdio.h>
//コード11-7 main関数に渡された引数の数を確認する
int main(int argc, char** argv)
{
    printf("argc=%d\n", argc);//指定されたコマンドライン引数+1が表示される
    return 0;
}