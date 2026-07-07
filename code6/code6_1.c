#include <stdio.h>
//コード6-1 変数が多すぎてごちゃごちゃしたコード
typedef char String[1024];

int main(void)
{
    String seiryuName = "青龍";
    int seiryuHp = 100;
    int seiryuAtk = 20;
    String suzakuName = "朱雀";
    int suzakuHp = 100;
    int suzakuAtk = 30;
    String byakkoName = "白虎";
    int byakkoHp = 100;
    int byakkoAtk = 10;
    String gennbuName = "玄武";
    int gennbuHp = 100;
    //この行で攻撃力を設定し忘れている
    return 0;
}