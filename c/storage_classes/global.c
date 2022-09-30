#include <stdio.h>

int x = 10;

void foo()
{
    printf("\nfoo - x=%d", x);
    return;
}

void bar()
{
    printf("\nbar - x=%d", x);
    return;
}

int main()
{
    int x= 1;

    printf("\nmain- x=%d", x);
    {
        int x = 500;
        printf("\n - x=%d", x);
    }
    printf("\n back in main - x=%d", x);

    x = 100;
    foo();

    x = 200;
    bar();

    return 0;
}
