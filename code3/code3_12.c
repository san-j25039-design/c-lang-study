#include <stdio.h>
#include <stdlib.h>
//コード3-12 文字列を整数に変換する
typedef char String[1024];

int main(void){
    String age = 29;
    int n = atoi(age); //atoiによって文字列を整数に変換
    printf("あなたは来年%d歳になります\n", n + 1);
    return 0;
}