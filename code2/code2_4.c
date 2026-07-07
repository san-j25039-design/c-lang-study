#include <stdio.h>
//2-4 変数を再代入するプログラム
int main(void){
    int age = 19;
    printf("私の年齢は%d\n", age);
    age = 91;//変数の再代入を行う
    printf("いや、本当の年齢は%d\n", age);//さっきとは違う値が表示される
    return 0;
}