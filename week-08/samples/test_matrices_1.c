#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_matrix1(int *numbers, int rows, int cols)
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

void print_array(int *numbers, int length)
{
    printf("%d", numbers[0]);
    for (int i = 1; i < length; i++)
    {
        printf(" %d", numbers[i]);
    }
    putchar('\n');
}

void print_matrix2(int *numbers, int rows, int cols)
{
    for(int row=0; row < rows; row++) {
        print_array(numbers + row * cols, cols);
    }
}

int main(int argc, char *argv[])
{
    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);

    int numbers[rows][cols];
    srand(time(NULL));

    // generating the values
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            numbers[row][col] = rand() % 10;
        }
    }

    // printing the matrix
    for (int row = 0; row < rows; row++)
    {
        // printing one row is exactly the same as printing a 1D array
        printf("%d", numbers[row][0]);
        for (int col = 1; col < cols; col++)
        {
            printf(" %d", numbers[row][col]);
        }
        putchar('\n');
    }

    puts("===");

    // printing the memory addresses
    for (int row = 0; row < rows; row++)
    {
        printf("%p", &numbers[row][0]);
        for (int col = 1; col < cols; col++)
        {
            printf(" %p", &numbers[row][col]);
        }
        putchar('\n');
    }

    puts("=== print_matrix1");

    print_matrix1(&numbers[0][0], rows, cols);
    
    puts("=== print_matrix2");

    print_matrix2(&numbers[0][0], rows, cols);

    return EXIT_SUCCESS;
}