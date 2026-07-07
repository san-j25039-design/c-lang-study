#include <stdio.h>
//コード3-7 値の型より小さな型に代入(警告)
int main(void){
    int i = 3.2; //3.2を無理やり代入
    printf("%d\n", i); //3と表示される
    return 0;
}