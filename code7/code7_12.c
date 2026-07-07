#include <stdio.h>
//コード7-12 文字列型から１文字ずつ取り出す
typedef char String[1024];

int main(void)
{
    String msg = "HAL";
    printf("%c\n", msg[0]);//H
    printf("%c\n", msg[0]);//A
    printf("%c\n", msg[0]);//L
    return 0;
}