#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 11

int main()
{
    char line[LENGTH];
    int n = atoi(gets(line));

    char lines[n][LENGTH];
    for (int i = 0; i < n; i++)
    {
        gets(lines[i]);
    }

    puts("===");

    for (int i = 0; i < n; i++)
    {
        puts(lines[i]);
    }

    puts("===");

    for (int row = 0; row < n; row++)
    {
        printf("%p", &lines[row][0]);
        for (int col = 1; col < LENGTH; col++)
        {
            printf(" %p", &lines[row][col]);
        }
        putchar('\n');
    }

    puts("===");

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < LENGTH; col++)
        {
            printf("%8d", lines[row][col]);
        }
        putchar('\n');
    }

    return EXIT_SUCCESS;
}