#include <stdio.h>
//コード3-10 命令実行の文(画面出力)
int main(void){
    int age = 29;
    printf("今年%d歳で、", age);
    int newAge = age + 1; //30が代入される
    printf("来年%d歳ですね\n", newAge);
    return 0;
}