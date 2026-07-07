#include <stdio.h>
//コード6-3 構造体でステータスも設定する
typedef char String[1024];

int main(void)
{
    typedef struct{ //ここで構造体を定義
        String name;
        int hp;
        int atk;
    } Monster;

    //構造体変数を宣言するとともに初期化
    Monster seiryu = {"青龍", 80,15};
    Monster suzaku = {"朱雀", 100,30};
    Monster byakko = {"白虎", 100,20};
    Monster gennbu = {"玄武", 120,10};
    return 0;
}