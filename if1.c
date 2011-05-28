/*
 * if文のサンプル
 *
 * 変数の初期値を変えたり、式の条件を
 * 変えてみたりしましょう
 */
#include <stdio.h>

int main()
{
    int a = 3;
    int b = 1;

    //同じかどうか
    if(a==3)
        printf("aは3です\n");

    //違うかどうか
    if(a!=3)
        printf("aは3ではありません\n");

    //不等号(">")
    if(a>3)
        printf("aは3より大きいです\n");

    //不等号(">=")
    if(a>=3)
        printf("aは3以上です\n");

    //変数どうしの比較
    if(a>b)
        printf("aはbよりも大きいです\n");

    return 0;
}
