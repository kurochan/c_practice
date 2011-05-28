/*
 * 変数を初期化しないで使うとどうなるかのサンプル
 * 何か他のプログラムを実行した後にこのプログラムを実行すると、
 * 初期化しないと実行するたびに出力される数字が違うのがわかります。
 */
#include <stdio.h>

int main(void)
{
    int value;
    printf("%d¥n", value);
    return (0);
}
