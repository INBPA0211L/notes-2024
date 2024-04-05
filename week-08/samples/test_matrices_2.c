#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate_matrix(int rows, int cols)
{
    int *numbers = (int *)calloc(rows * cols, sizeof(int));
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            numbers[row * cols + col] = rand() % 10;
        }
    }

    return numbers;
}

void print_matrix(int *numbers, int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        printf("%d", numbers[row * cols + 0]);
        for (int col = 1; col < cols; col++)
        {
            printf(" %d", numbers[row * cols + col]);
        }
        putchar('\n');
    }
}

int main(int argc, char *argv[])
{
    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);

    srand(time(NULL));

    int *numbers = generate_matrix(rows, cols);

    // printing the matrix
    for (int row = 0; row < rows; row++)
    {
        printf("%d", numbers[row * cols + 0]);
        for (int col = 1; col < cols; col++)
        {
            printf(" %d", numbers[row * cols + col]);
        }
        putchar('\n');
    }

    puts("===");

    // printing the memory addresses
    for (int row = 0; row < rows; row++)
    {
        printf("%p", &numbers[row * cols + 0]);
        for (int col = 1; col < cols; col++)
        {
            printf(" %p", &numbers[row * cols + col]);
        }
        putchar('\n');
    }

    puts("=== print_matrix");

    print_matrix(numbers, rows, cols);

    free(numbers);

    return EXIT_SUCCESS;
}