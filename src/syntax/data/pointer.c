#include <stdbool.h>
#include <stdio.h>

void main()
{
    bool value = true;
    bool* point = &value;
    printf("point: %p, value: %d\n", point, *point);
    value = false;
    printf("point: %p, value: %d\n", point, *point);

    int powers[] = {1, 2, 4, 6, 8, 16, 32, 64};

    // 指针使用加减法是以地址为单位
    int* p = &powers[0];
    printf("point: %p, value: %d\n", p, *p);
    p = p + 1;
    printf("point: %p, value: %d\n", p, *p);
    p = p + 3;
    printf("point: %p, value: %d\n", p, *p);
    p++;
    printf("point: %p, value: %d\n", p, *p);
}
