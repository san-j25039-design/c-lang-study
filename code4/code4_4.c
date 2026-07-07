#include <stdio.h>
#include <stdbool.h>
//コード4-4 文字列を比較する？
typedef char String[1024];

int main(void)
{
    String password;
    printf("パスワードを入力してください\n");
    scanf("%S", password);
    if(password == "123456"){ //実はこれだと正しく比較できない
        printf("正しいパスワードです\n");
    }else{
        printf("パスワードが違います\n");
    }
    return 0;
}