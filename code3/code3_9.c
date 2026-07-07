#include <stdio.h>
//コード3-9 異なる型同士の算術計算
int main(void){
    double d = 8.5 / 2; //int型の2をdouble型に変換
    long l = 5 + 2L; //int型の5をlong型に変換
    printf("%f\n", d); //4.25
    printf("%ld\n", l); //7
    return 0;
}