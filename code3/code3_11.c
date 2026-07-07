#include <stdio.h>
//コード3-11 2つのプレースホルダを使ったprintf命令
typedef char String[1024];

int main(void){
    int age = 29;
    String name = "たかはし";
    printf("私は%d歳の%sです\n", age, name); //私は29歳のたかはしです
    return 0;
}