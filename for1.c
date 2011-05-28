/*
 * for文のサンプル
 */
#include <stdio.h>

int main(void)
{
    int i;  //カウント用の変数

    //for(初期化文;継続条件;インクリメント文)
    for(i = 0; i < 10; i++) {
        printf("i = %d¥n", i);
    }

    return (0);
}
