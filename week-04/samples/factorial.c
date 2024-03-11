#include <stdio.h>
#include <stdlib.h>

int fact_rec(int n)
{
    return n == 0 ? 1 : n * fact_rec(n - 1);
}

int fact_it(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("fact(%d) = %d\n", n, fact_rec(n));
    printf("fact(%d) = %d\n", n, fact_it(n));

    return EXIT_SUCCESS;
}