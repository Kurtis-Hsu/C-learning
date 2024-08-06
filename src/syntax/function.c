#include <stdio.h>

int sum(int a, int b); // 声明一个函数原型
void change(int*);

void main()
{
    printf("%d + %d = %d\n", 1, 1, sum(1, 1));

    int num = 10;
    printf("num: %d\n", num);
    change(&num); // & 取地址
    printf("num: %d\n", num);
}

int sum(int a, int b) // 定义函数的实现
{
    return a + b;
}

void change(int* i)
{
    *i = 1; // * 获取指针指向的变量
}
