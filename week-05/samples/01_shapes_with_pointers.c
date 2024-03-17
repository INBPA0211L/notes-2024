#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rectangle_area(int a, int b, int *area)
{
    *area = a * b;
}

void rectangle_perimeter(int a, int b, int *perimeter)
{
    *perimeter = 2 * (a + b);
}

void square_area(int a, int *area)
{
    rectangle_area(a, a, area);
}

void square_perimeter(int a, int *perimeter)
{
    rectangle_perimeter(a, a, perimeter);
}

void circle_area(double r, double *area)
{
    *area = acos(-1) * r * r;
}

void circle_circumference(double r, double *circumference)
{
    *circumference = 2.0 * acos(-1) * r;
}

int main()
{
    puts("== rectangle == ");

    int rectangle_a, rectangle_b, rectangle_result;
    puts("Enter the sides of the rectangle!");
    scanf("%d %d", &rectangle_a, &rectangle_b);

    rectangle_area(rectangle_a, rectangle_b, &rectangle_result);
    printf("area: %d\n", rectangle_result);
    rectangle_perimeter(rectangle_a, rectangle_b, &rectangle_result);
    printf("perimeter: %d\n", rectangle_result);

    puts("== square == ");

    int square_a, square_result;
    puts("Enter the side of the square!");
    scanf("%dd", &square_a);

    square_area(square_a, &square_result);
    printf("area: %d\n", square_result);
    square_perimeter(square_a, &square_result);
    printf("perimeter: %d\n", square_result);

    puts("== circle ==");

    double circle_r, circle_result;
    puts("Enter the radius of the circle!");
    scanf("%lf", &circle_r);

    circle_area(circle_r, &circle_result);
    printf("area: %.2lf\n", circle_result);
    circle_circumference(circle_r, &circle_result);
    printf("circumference: %.2lf\n", circle_result);

    return EXIT_SUCCESS;
}