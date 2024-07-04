#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#define PI 3.14 // 预处理，将 PI 硬编码替换为 3.14

const double pi = 3.14; // 定义一个只读变量（常量）

// C 的数据类型分为基本类型、构造类型、指针类型和空类型

// - 基本类型包括整型、浮点型、字符型、布尔型和枚举型
int oct = 022; // 八进制，前缀为 0
int dec = 16; // 十进制，没有前缀
int hex = 0x10; // 十六进制，前缀为 0x

int d1 = 1; // 整型
short int d2 = 1; // 短整型，int 可省略
long int d3 = 1; // 长整型，int 可省略
// int 最小两个字节，一般为四个字节
// long long >= long >= int >= short
unsigned int d4 = 1; // 无符号整型，int 可省略

// 以下是 C99 新增声明方式
long long int d5 = 1; // 长整型，int 可省略
unsigned short d6 = 1;
unsigned long d7 = -1; // 4294967295
int8_t i1 = 1; // 8位
int16_t i2 = 2; // 16位
int32_t i3 = 3; // 32位
int64_t i4 = 4; // 64位

int_fast8_t t = 1;

// 浮点型
float f = 123456.789;
double d = 987654.321;
long double ld = 123456789.123;

int a = 1, b = 1L, c = 2E3, u = 1U, ul = 1UL, ull = 1ULL; // 后缀用于在声明字面量时表面字面量的类型

// 字符型
char
    c1 = 'a',
    c2 = '\'',
    c3 = '\103', // 八进制，省略了 0
    c4 = '\x46',
    c5 = '\0';

char* s = "123";
// 字符串本质是一组字符数组，编译时自动在末尾添加 \0 字符

// 布尔型是 C99 新增的
_Bool b1 = 1; // 仅占 1 位，0 表示 false，1 表示 true
bool b2 = true;
bool b3 = false;

// C99 中加入了复数和虚数
float _Complex fc = 1;
double _Complex dc = 1;
long _Complex lc = 1;
// float _Imaginary fi = 1;
// double _Imaginary di = 1;
// long _Imaginary li = 1;

// - 构造类型是由基本类型按一定规则组合成复杂数据类型
// - 指针类型用于表示内存地址。可用于表示基本类型数据的地址，也可用于表示构造类型数据中第一个数据的地址（也称首地址）和其中某个数据的具体地址
// - 空类型是从语法完整性角度给出的数据类型，表示不需要值，因此没有类型

void main()
{
    int i;
    i = 1;
    i = .123;
    i = 3e5; // 指数形式
    i = 3E5;
    i = c1; // 字符型本质是 ASCII 码，可做整型使用
    i = c2;
    i = c3; // 八进制表示字符
    i = c4; // 十六进制表示字符
    i = c5; // 空字符，区别于空格符

    printf("size of short %lld\n", sizeof(short));
    printf("size of int %lld\n", sizeof(int));
    printf("size of long %lld\n", sizeof(long));
    printf("size of long long %lld\n", sizeof(long long));

    printf("value of float: %f, size: %lld\n", f, sizeof f);
    printf("value of double: %f, size: %lld\n", d, sizeof d);

    printf("%f", PI);
}
