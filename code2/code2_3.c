#include <stdio.h>
//2-3 値を代入しない変数を使うプログラム
int main(void){
    char x;//初期化と同時に代入を行わない
    printf("%d\n", x);//そのため、でたらめな値が表示される
    return 0;
}