#include <stdio.h>
//コード9-5 関数のエコな作り方
typedef char String[1024];

typedef struct{
    String name;
    int hp;
    int atk;
    //その他もろもろのメンバたち
} Monster

void printMonstersSummary(Monster* m){
    printf("モンスター %s (HP= %d)\n", (*m).name, (*m).hp);
}

int main(void)
{
    Monster suzaku = {"朱雀", 100, 80};
    printMonstersSummary(&suzaku);
    //モンスター 朱雀 (HP= 100)
    return 0;
}