#include <stdio.h>
//コード2-5 書き換えてはいけない変数を上書きしてしまうプログラム
int main(void){
    int tax = 110; //消費税を表現
    int fax = 50000; //FAXの値段を表現
    printf("FAXを40000円に値下げします\n");
    tax = 40000; //faxとtaxを間違えてしまう
    printf("FAXの新価格(税込): %d円\n", fax * tax / 100); //えげつない価格になってしまう
}
