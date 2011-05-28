/*
 * for文のサンプルその2
 * サンプル1と違って、減算していく
 */
#include <stdio.h>

int main(void)
{
    int i;  //カウンタに使う変数を宣言

    //for(初期化文; 継続条件; 減算処理)
    for(i = 10; i > 0; i--) {
        printf("iの値は、%dです¥n", i);
    }

    return (0);
}
