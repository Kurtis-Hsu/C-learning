#include <stdio.h>

void main()
{
    float candy[365];
    char code[12];
    int states[50];

    int powers[] = {1, 2, 4, 6, 8, 16, 32, 64};

    const int datas[] = {1, 2, 3};

    // datas[1] = 4; // const 声明一个变量只读，无法修改

    printf(
        "size of array: %zd\n"
        "size of single component: %zd\n"
        "number of component: %zd\n",
        sizeof powers,
        sizeof powers[0],
        sizeof powers / sizeof powers[0]
    );
}
