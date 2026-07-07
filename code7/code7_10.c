#include <stdio.h>
//コード7-10 配列の内容をコピーする
int main(void)
{
    int a[5] = {1,2,3,4,5};
    int b[5];
    for(int i = 0; i < 5; i++){
        b[i]=a[i];
    }
    return 0;
}