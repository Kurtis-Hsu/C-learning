// C 的数据类型分为基本类型、构造类型、指针类型和空类型

// - 基本类型包括整型、浮点型、字符型和枚举型

int d1 = 1; // 整型
short int d2 = 1; // 短整型，int 可省略
long int d3 = 1; // 长整型，int 可省略
long long int d4 = 1; // 长整型，int 可省略
// 字长方面，long long >= long >= int >= short
unsigned d5 = 1; // 无符号整型，后面可加 int、short、long 表示数据长度，默认为 int

float f = 123456.789;
double d = 987654.321;

// - 构造类型是由基本类型按一定规则组合成复杂数据类型
// - 指针类型用于表示内存地址。可用于表示基本类型数据的地址，也可用于表示构造类型数据中第一个数据的地址（也称首地址）和其中某个数据的具体地址
// - 空类型是从语法完整性角度给出的数据类型，表示不需要值，因此没有类型

#include <stdio.h>
int oct = 022; // 八进制，前缀为 0
int dec = 16; // 十进制，没有前缀
int hex = 0x10; // 十六进制，前缀为 0x


void main()
{
    int i;
    i = 1;
    i = .123;
    i = 3e5; // 指数形式
    i = 3E5;
    i = 'a'; // 字符型本质是 ASCII 码，可做整型使用
    i = '\'';
    i = '\103'; // 八进制表示字符
    i = '\x46'; // 十六进制表示字符
    i = '\0'; // 空字符，区别于空格符
    long long a = "123"; // 字符串的首地址
    // 字符串本质是一组字符数组，编译时自动在末尾添加 \0 字符
    printf("%lld\n", a);

    printf("size of short %lld\n", sizeof(short));
    printf("size of int %lld\n", sizeof(int));
    printf("size of long %lld\n", sizeof(long));
    printf("size of long long %lld\n", sizeof(long long));

    printf("value of float: %f, size: %lld\n", f, sizeof f);
    printf("value of double: %f, size: %lld\n", d, sizeof d);
}
