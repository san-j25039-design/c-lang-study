v#include <stdio.h>
//コード3-8 明示的な方変換
int main(void){
    int age = (int)3.2; //この行で明示的な型変換を行う
    printf("%d\n", age); //実行結果は3となる
    return 0;
}