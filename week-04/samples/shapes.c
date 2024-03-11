#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rectangle_area(int a, int b) {
    return a * b;
}

int rectangle_perimeter(int a, int b) {
    return 2 * (a + b);
}

int square_area(int a) {
    // return a * a;
    return rectangle_area(a, a);
}

int square_perimeter(int a) {
    // return 4 * a;
    return rectangle_perimeter(a, a);
}

double circle_area(double r) {
    // return M_PI * r * r;
    return acos(-1) * r * r;
}

double circle_circumference(double r) {
    return 2.0 * acos(-1) * r;
}

int main() {
    puts("Enter the sides of the rectangle!");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("area: %d\n", rectangle_area(a, b));
    printf("perimeter: %d\n", rectangle_perimeter(a, b));

    puts("====");

    puts("Enter the side of the square!");
    scanf("%d", &a);
    printf("area: %d\n", square_area(a));
    printf("perimeter: %d\n", square_perimeter(a));

    puts("====");

    double r;
    puts("Enter the radius of the circle!");
    scanf("%lf", &r);
    printf("area: %.2lf\n", circle_area(r));
    printf("circumference: %.2lf\n", circle_circumference(r));



    return EXIT_SUCCESS;
}