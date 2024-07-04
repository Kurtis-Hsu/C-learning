#include <stdio.h>

typedef char int8; // 为一个类型定义一个别名
typedef unsigned char uint8;

void main()
{
    size_t s = 1; // sizeof 运算符返回的是 size_t 类型值，该类型为无符号64位整数

    printf("%zd\n", sizeof 1); // zd 专为为 size_t 类型而生
    printf("%lu\n", sizeof 1.0);
    printf("%lld\n", sizeof(float));
}
