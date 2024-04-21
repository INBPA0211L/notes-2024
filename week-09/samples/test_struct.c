#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[11];
    char neptun[7];
    int age;
};

void print_student(struct student value)
{
    printf("%s %s %d\n", value.name, value.neptun, value.age);
}

int main()
{
    struct student s1 = {"John Doe", "ABC123", 21};

    printf("%s %s %d\n", s1.name, s1.neptun, s1.age);
    printf("%p %p %p\n", s1.name, s1.neptun, &s1.age);
    printf("%d\n", sizeof(struct student));

    struct student *p = &s1;
    printf("%s %s %d\n", p->name, p->neptun, p->age);
    
    struct student s2;
    scanf("%s %s %d", s2.name, s2.neptun, &s2.age);
    print_student(s2);


    return EXIT_SUCCESS;
}