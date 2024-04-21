#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[11];
    char neptun[7];
    int age;
} STUDENT;

void print_student(STUDENT value)
{
    printf("%s %s %d\n", value.name, value.neptun, value.age);
}

int main()
{
    STUDENT s1 = {"John Doe", "ABC123", 21};

    printf("%s %s %d\n", s1.name, s1.neptun, s1.age);
    printf("%p %p %p\n", s1.name, s1.neptun, &s1.age);
    printf("%d\n", sizeof(STUDENT));

    STUDENT *p = &s1;
    printf("%s %s %d\n", p->name, p->neptun, p->age);

    STUDENT s2;
    scanf("%s %s %d", s2.name, s2.neptun, &s2.age);
    print_student(s2);

    return EXIT_SUCCESS;
}