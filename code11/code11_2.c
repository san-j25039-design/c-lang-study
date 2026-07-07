#include <stdio.h>
//コード11-2 変数strのメモリ領域
typedef char String[1024];

int main(void)
{
    char ages[1024] = {19,21,29,29};
    String str = "hello";
    printf("%s\n", str);//hello

    for(int i = 0; i < 10; i++){
        printf("%d, "str[i]);//6文字目からは実行環境ごとに値が異なる
    }
    return 0;
}