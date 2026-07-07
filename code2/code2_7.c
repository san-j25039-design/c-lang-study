#include <stdio.h>
//コード2-7 無理やり文字列を使えるようにしたプログラム
typedef char String[1024];
//上記の文で文字列を使えるようにしたっぽい
int main(void){
    String monsterName = "ドラゴン";
    printf("敵は%s\n", monsterName);
    return 0;
}