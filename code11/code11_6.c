#include <stdio.h>
//コード11-6 scanfで入力を受け付ける
typedef char String[1024];

int main(void)
{
    char name[1024];
    int age;
    printf("名前と年齢をスペース区切りで入力してください\n");
    scanf("%s %d", name, &age);//配列は自動的にアドレスとして変換されるので&nameではない
    printf("氏名:%s 年齢:%d\n");//入力された値を表示する
    return 0;
}