#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%4d", numbers[i]);
    }
    putchar('\n');
}

int cmp(const void *a, const void *b)
{
    int *left = (int *)a;
    int *right = (int *)b;

    return *left - *right;
}

int main(int argc, char *argv[])
{
    int length = atoi(argv[1]);

    srand(time(NULL));
    int numbers[length];
    for (int i = 0; i < length; i++)
    {
        numbers[i] = rand() % 100;
    }

    print_array(numbers, length);
    qsort(numbers, length, sizeof(int), cmp);
    print_array(numbers, length);

    return EXIT_SUCCESS;
}