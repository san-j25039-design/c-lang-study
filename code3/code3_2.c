#include <stdio.h>
//コード3-2 エスケープシーケンスを使わない例(エラー)
int main(void){
    printf("私の好きな記号は"です\n"); //ここでエラーが発生する
    return 0;
}