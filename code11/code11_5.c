#include <stdio.h>
//コード11-5 sprintfで文字列に書き込む
typedef char String[1024];

int main(void)
{
    char str[1024];
    sprintf(str, "%8s HP= %04d / %04d", "dragon", 50, 1200);
    //このあとに、strの内容をファイルに書き込んだりして利用する
    return 0;
}