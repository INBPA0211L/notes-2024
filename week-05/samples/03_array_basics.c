#include <stdio.h>
#include <stdlib.h>

void print_array(int *numbers, int length)
{
    printf("%d", numbers[0]);
    for (int i = 1; i < length; i++)
    {
        printf(" %d", numbers[i]);
    }
    printf("\n");
}

int main()
{
    // declaring arrays

    int numbers[5];
    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 2;
    numbers[3] = 3;
    numbers[4] = 4;

    // int numbers[5] = {0, 1, 2, 3, 4};
    // int numbers[] = {0, 1, 2, 3, 4};
    // int numbers[5] = {0};


    // printing an array's elements and their memory addresses
    for (int i = 0; i < 5; i++)
    {
        printf("%d %p %p\n", numbers[i], &numbers[i], numbers + i);
    }
    printf("%d %d\n", sizeof(numbers), sizeof(numbers[0]));


    puts("=====");

    // declaring a second array
    int numbers2[] = {0, 1, 2, 3};
    printf("%d\n", sizeof(numbers2));

    puts("=====");

    // declaring a third array
    int numbers3[40] = {0};
    for (int i = 0; i < 40; i++)
    {
        printf("%d %p\n", numbers3[i], &numbers3[i]);
    }
    printf("%d\n", sizeof(numbers3));


    puts("=====");

    // playing with indices and addresses

    int *element = &numbers[0];
    printf("%p\n", element);
    element++;
    printf("%p\n", element);
    element++;
    printf("%p\n", element);

    numbers[9] = 25;
    numbers[-2] = 19;
    printf("%d %d\n", numbers[9], numbers[-2]);

    printf("%d %d\n", numbers[3], 3 [numbers]);

    puts("=====");

    // printing an array with the function

    print_array(numbers, 5);
    print_array(numbers, sizeof(numbers) / sizeof(int));

    return EXIT_SUCCESS;
}