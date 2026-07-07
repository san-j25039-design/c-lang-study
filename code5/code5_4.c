#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//コード5-4 定数で改良したプログラム
int main(void)
{
    enum{DAIKICHI = 1, KICHI, KYO};
    printf("あなたの運勢を占います\n");
    srand((unsigned)time(NULL));
    int fortune = rand() % 3 + 1; //1から3の乱数を作成

    switch(fortune){
        case DAIKICHI:
            printf("大吉"); 
            break;
        case KICHI:
            printf("吉");
            break;
        default:
            printf("凶");
    }
    return 0;
}