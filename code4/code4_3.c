#include <stdio.h>
#include <stdbool.h>
//コード4-3 波カッコを省略した記述
int main(void)
{
    bool tenki = true;
    if(tenki == true){
        printf("散歩します\n");
    }else //中身が1行なので{}を省略
        printf("映画みます\n");
    return 0;
}