#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %c%d", &a, &op, &b);
    printf("%d %c %d\n", a, op, b);

    if (op == '+')
        printf("%d\n", a + b);
        printf("Addition\n");

    return EXIT_SUCCESS;
}