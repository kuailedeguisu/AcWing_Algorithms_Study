#include <stdio.h>
/*
依次输出一个正整数的二进制位数
*/

int main()
{
    int n = 10;
    for (int k = 3; k >= 0; k--)
        printf("%d", n >> k & 1);
    printf("\n");

    return 0;
}
