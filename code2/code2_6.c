#include <stdio.h>
//コード2-6 定数を使ったプログラム
int main(void){
    const int TAX = 110; //constを使い定数を宣言
    int fax = 50000;
    printf("40000円に値下げします\n");
    TAX = 40000; //ここでエラーが発生し、間違いに気付ける
    printf("FAXの新価格(税込): %d円\n", fax * TAX / 100);
    return 0;
}