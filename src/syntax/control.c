#include <stdio.h>

void main()
{
label:
    if (1) printf("if statement");

    if (0) printf("if");
    else printf("else");

    if (1) printf("if");
    else if (1) printf("else if");
    else printf("else");

    int num = 0;
    switch (num)
    {
    case 0:
        break;
    case 1:
        break;
    case 2:
    case 3:
        break;
    default:
        break;
    }

    while (1)
    {
        printf("while\n");
        // continue;
        break;
    }

    for (;;)
    {
        printf("empty for\n");
        break;
    }

    int i;
    for (i = 0; i < 10; i++) printf("for %d\n", i);

    // for (int i = 0; i < 10; i++) printf("C99 for %d\n", i); // C99 可以在小括号内初始化计数器

    do
    {
        printf("do while");
        break;
    }
    while (1);

    if (0) goto label;
}
