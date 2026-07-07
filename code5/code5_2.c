#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//コード5-2 うっかりbreak文を忘れたプログラム
int main(void)
{
    printf("あなたの運勢を占います\n");
    srand((unsigned)time(NULL));
    int fortune = rand() % 4 + 1; //1から4の乱数を作成

    switch(fortune){
        case 1:
            printf("大吉"); //ここでbreak文を入れ忘れる
        case 2:
            printf("中吉"); //case1でも、これが実行されてしまう
            break;
        case 3:
            printf("吉");
            break;
        default:
            printf("凶");
    }
    return 0;
}