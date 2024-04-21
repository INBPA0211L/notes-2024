#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int cmp(const void *a, const void *b)
{
    char **left = (char **)a;
    char **right = (char **)b;

    printf("*%s*%s*%d*%d*\n", *left, *right, strlen(*left), strlen(*right));

    char lower_left[strlen(*left) + 1];
    char lower_right[strlen(*right) + 1];

    for (int i = 0; i <= strlen(*left); i++)
    {
        lower_left[i] = tolower((*left)[i]);
    }

    for (int i = 0; i <= strlen(*right); i++)
    {
        lower_right[i] = tolower((*right)[i]);
    }

    return strcmp(lower_left, lower_right);
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