#include <stdio.h>
//2-2 オーバーフローが発生するプログラム
int main(void){
    char c = 100;
    char d = c + 100; //ここでオーバーフローが発生するっぽい
    printf("%d\n", d);//その影響で、想定と異なる値が表示される
    return 0;
}