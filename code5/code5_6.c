#include <stdio.h>
//コード5-6 ループ変数iを表示してみよう
int main(void)
{
    for(int i = 0; i < 10; i++){
        printf("%d回目のこんにちは\n", i); //変数iも一緒に表示する
    }
    return 0;
}