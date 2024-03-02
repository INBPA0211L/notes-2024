#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < n);

    return EXIT_SUCCESS;
}