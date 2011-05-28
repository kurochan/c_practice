/*
 * if文のサンプル
 * {}でくくってブロックとして扱う
 */
#include <stdio.h>

int main()
{
    int a = 3;
    int b = 1;

    //ブロックを使って、if文の範囲を指定していることに注目
    if(a > b) {
        printf("aはbよりも大きいです\n");
        b = 3;
    }

    if(a == b)
        printf("aとbは等しいです\n");

    return 0;
}
