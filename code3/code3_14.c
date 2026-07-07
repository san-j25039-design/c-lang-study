#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//コード3-14 準備してから乱数を作る
int main(void){
    srand((unsigned)time(NULL));
    int r = rand() % 100;
    printf("あなたは恐らく%d歳ですね？\n", r); //おまじないのおかげで実行のたびに結果が変わる
    return 0;
}