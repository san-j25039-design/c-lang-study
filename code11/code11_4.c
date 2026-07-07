#include <stdio.h>
#include <stdlib.h>
//コード11-4 strlenで文字列の長さを取得する
typedef char String[1024];

int main(void)
{
    char str[1024] = "c language";//1024バイトを確保
    int len = strlen(str);
    printf("%d\n", len);//使用されてるバイト数を示すので10と表示される
    return 0;
}