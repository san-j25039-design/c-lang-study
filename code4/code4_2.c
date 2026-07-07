#include <stdio.h>
#include <stdbool.h>
//コード4-2 トイレを待つ行動をC言語で表現
int main(void)
{
    bool doorClosed = true;
    while(doorClosed == true){ //ちなみに無限ループするっぽい
        printf("ノックして1分待つ\n");
    }
    return 0;
}