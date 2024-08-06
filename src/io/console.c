#include <stdio.h>

void main()
{
    printf("print a long ");
    printf("string.\n");

    printf(
        "print a long"
        "string.\n"
    );

    printf(
        "print a long \
string.\n"
    );

    int a = 1;
    double b = 3.14;
    char c = 'c';
    printf("a: %d, b: %.2f, c: %c\n", a, b,+ c);

    char name[10];
    printf("What's your name? >");
    scanf("%s", &name);
    printf("Hello %s!\n", name);

    printf("give me a character >");
    putchar(c);
    printf("get a character: %c\n", c);

    // puts 函数自动输出换行符
    puts("");
    puts("puts sth");
    puts("next line");
}
