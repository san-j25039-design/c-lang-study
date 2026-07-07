#include <stdio.h>
//コード7-5 配列の合計と平均を求める
int main(void)
{
    int scores[] = {75,57,90,46,82};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += scores[i];//合計点を求める
    }
    int avg = sum / 5;//平均点を求める
    printf("合計点：%d\n", sum);
    printf("平均点：%d\n", avg);
    return 0;
}