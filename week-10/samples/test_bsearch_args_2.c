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

    puts("Enter the value that you are looking for!");
    char value[101];
    gets(value);
    
    char *address = &value[0];
    char **result = bsearch(&address, argv + 1, argc - 1, sizeof(char *), cmp);
    if (!result)
    {
        fprintf(stderr, "%s cannot be found\n", value);
    }
    else
    {
        printf("%s was found at @%p #%d\n", value, result, result - argv);
    }

    return EXIT_SUCCESS;
}