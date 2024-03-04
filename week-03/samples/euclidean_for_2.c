#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, remainder;

    for (scanf("%d %d", &a, &b); remainder = a % b; a = b, b = remainder)
        ;

    printf("%d\n", b);

    return EXIT_SUCCESS;
}