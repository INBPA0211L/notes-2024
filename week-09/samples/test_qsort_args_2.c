#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    char **left = (char **)a;
    char **right = (char **)b;

    if (strlen(*left) != strlen(*right))
    {
        return strlen(*left) - strlen(*right);
    }

    return strcmp(*left, *right);
}

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        printf("%2d *%s*\n", i, argv[i]);
    }
    putchar('\n');

    qsort(argv + 1, argc - 1, sizeof(char *), cmp);

    for (int i = 1; i < argc; i++)
    {
        printf("%2d *%s*\n", i, argv[i]);
    }
    putchar('\n');

    return EXIT_SUCCESS;
}