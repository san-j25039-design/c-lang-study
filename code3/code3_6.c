#include <stdio.h>
//コード3-6 値の型より大きな型の変数に代入
int main(void){
    float f = 3;
    double d = f; //double型はfloat型より大きい
    printf("%f\n", f);
    printf("%f\n", d);
    return 0;
}