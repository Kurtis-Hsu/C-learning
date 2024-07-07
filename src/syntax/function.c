#include <stdio.h>
int sum(int a, int b); // 声明一个函数

void main()
{
    printf("%d + %d = %d", 1, 1, sum(1, 1));
}

int sum(const int a, const int b)
{
    return a + b;
}
