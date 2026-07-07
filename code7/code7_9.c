#include <stdio.h>
//コード7-9 配列を使って味方モンスターを扱う
typedef char String[1024];

int main(void)
{
    typedef struct{
        String name;
        int hp;
        int atk;
    } Monster;

    Monster seiryu = {"青龍", 100, 15};
    Monster suzaku = {"朱雀", 80, 20};
    Monster byakko = {"白虎", 110, 10};
    Monster gennbu = {"玄武", 70, 35};
    return 0;
}