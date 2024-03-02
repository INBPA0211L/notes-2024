#include <stdio.h>
#include <stdlib.h>

int main()
{
    int left, right;
    char op;

    scanf("%d %c %d", &left, &op, &right);
    printf("%d %c %d\n", left, op, right);

    if (op == '+')
    {
        printf("%d\n", left + right);
    }
    else if (op == '-')
    {
        printf("%d\n", left - right);
    }
    else if (op == '*')
    {
        printf("%d\n", left * right);
    }
    else if (op == '/')
    {
        printf("%d\n", left / right);
    }
    else
    {
        printf("%d\n", left % right);
    }

    return EXIT_SUCCESS;
}