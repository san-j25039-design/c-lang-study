#include <stdio.h>
#include <stdlib.h>
//コード3-13 乱数を作る(未完成)
int main(void){
    int r = rand() % 100;
    printf("あなたは恐らく%d歳ですね？\n", r); //準備が不十分なため、同じ値が表示されてしまう
    return 0;
}