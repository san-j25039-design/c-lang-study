#include <stdio.h>
//コード11-1 物理的な姿は同じ二つの変数
typedef char String[1024];

int main(void)
{
    char ages[1024] = {19,21,29,29};
    String str = "hello";
    printf("%s\n", str);//hello
    return 0;
}