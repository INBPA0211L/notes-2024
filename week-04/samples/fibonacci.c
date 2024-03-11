#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
    return n == 1 || n == 0 ? 1 : fibo(n - 1) + fibo(n - 2);
}

int fibo_debug(int n, int level)
{
    for (int i = 0; i < level; i++)
    {
        putchar(' ');
    }
    printf("%d\n", n);
    return n == 1 || n == 0 ? 1 : fibo_debug(n - 1, level + 1) + fibo_debug(n - 2, level + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("fibo(%d) = %d\n", n, fibo(n));
    printf("fibo(%d) = %d\n", n, fibo_debug(n, 0));

    return EXIT_SUCCESS;
}