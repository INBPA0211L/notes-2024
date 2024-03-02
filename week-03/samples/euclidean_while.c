#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    int remainder = a % b;

    // while(remainder != 0) {
    while (remainder)
    {
        a = b;
        b = remainder;
        remainder = a % b;
    }

    printf("%d\n", b);

    return EXIT_SUCCESS;
}