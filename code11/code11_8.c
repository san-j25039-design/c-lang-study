#include <stdio.h>
//コード11-8 main関数に渡された引数の数を確認する、その２
int main(int argc, char** argv)
{
    printf("argc=%d\n", argc);//指定されたコマンドライン引数+1が表示される
    for(int i = 0; i < argc; i++){
        char* strAddr = argv[i];//i番目の文字列のアドレスを取得
        printf("%d番目の情報: %s\n", i , strAddr);
    }
    return 0;
}