#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//コード4-5 文字列の代わりに数値で比較する
typedef char String[1024];

int main(void)
{
    String password;
    printf("パスワードを入力してください\n");
    scanf("%S", password);
    int n = atoi(password); //入力されたパスワードを数値に変換
    if(n == 123456){ //実はこれだと正しく比較できない
        printf("正しいパスワードです\n");
    }else{
        printf("パスワードが違います\n");
    }
    return 0;
}