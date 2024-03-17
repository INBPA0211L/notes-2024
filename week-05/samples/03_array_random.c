#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int *numbers, int length, int min, int max)
{

    for (int i = 0; i < length; i++)
    {
        numbers[i] = rand() % (max - min) + min;
    }
}

void print_array(int *numbers, int length)
{
    printf("%d", numbers[0]);
    for (int i = 1; i < length; i++)
    {
        printf(" %d", numbers[i]);
    }
    putchar('\n');
}

void sort_array_bubble_1(int *numbers, int length)
{
    int had_change;
    do
    {
        had_change = 0;
        for (int i = 1; i < length; i++)
        {
            if (numbers[i - 1] > numbers[i])
            {
                int tmp = numbers[i];
                numbers[i] = numbers[i - 1];
                numbers[i - 1] = tmp;
                had_change = 1;
            }
        }
    } while (had_change);
}

void sort_array_bubble_2(int *numbers, int length)
{
    int had_change = 1;
    while (had_change)
    {
        had_change = 0;
        for (int i = 1; i < length; i++)
        {
            if (numbers[i - 1] > numbers[i])
            {
                int tmp = numbers[i];
                numbers[i] = numbers[i - 1];
                numbers[i - 1] = tmp;
                had_change = 1;
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int length, min, max;
    scanf("%d %d %d", &length, &min, &max);
    int numbers[length];
    fill_array(numbers, sizeof(numbers) / sizeof(int), min, max);
    print_array(numbers, length);

    sort_array_bubble_1(numbers, length);
    print_array(numbers, length);

    puts("===");

    fill_array(numbers, sizeof(numbers) / sizeof(int), min, max);
    print_array(numbers, length);
    sort_array_bubble_2(numbers, length);
    print_array(numbers, length);

    return 0;
}