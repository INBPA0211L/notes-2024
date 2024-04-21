#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(char *s, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%3c (%3d)", s[i], s[i]);
    }
    putchar('\n');
}

int cmp(const void *a, const void *b)
{
    char *left = (char *)a;
    char *right = (char *)b;

    return *left - *right;
}

int main(int argc, char *argv[])
{
    print_array(argv[1], strlen(argv[1]));
    qsort(argv[1], strlen(argv[1]), sizeof(char), cmp);
    print_array(argv[1], strlen(argv[1]));

    return EXIT_SUCCESS;
}