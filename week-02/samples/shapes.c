#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Enter side a: ");
    int a;
    scanf("%d", &a);
    printf("Side a: %d\n", a);

    printf("Enter side b: ");
    int b;
    scanf("%d", &b);
    printf("Side b: %d\n", b);

    printf("The area is %d\n", a * b);

    double c, d;
    printf("Enter the sides!\n");
    scanf("%lf%lf", &c, &d);
    printf("%lf %.3lf\n", c, d);

    printf("The area is %lf\n", c * d);

    return EXIT_SUCCESS;
}