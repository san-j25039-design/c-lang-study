#include <stdio.h>
//コード6-2 構造体でコードを整理する
typedef char String[1024];

int main(void)
{
    struct MONSTER{ //このブロックで構造体を定義
        String name;
        int hp;
        int atk;
    };

    struct MONSTER seiryu;
    struct MONSTER suzaku;
    struct MONSTER byakko;
    struct MONSTER gennbu;
    return 0;
}