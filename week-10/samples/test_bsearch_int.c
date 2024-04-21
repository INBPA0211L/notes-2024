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

    puts("Enter the value that you are looking for!");
    int value;
    scanf("%d", &value);
    int *result = bsearch(&value, numbers, length, sizeof(int), cmp);
    if (!result)
    {
        fprintf(stderr, "%d cannot be found\n", value);
    }
    else
    {
        printf("%d was found at @%p #%d\n", value, result, result - numbers);
    }

    return EXIT_SUCCESS;
}