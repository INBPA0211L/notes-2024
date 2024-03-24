#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void print_header(char *fun, char *s)
{
    putchar('\n');
    puts(fun);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", i);
    }
    putchar('\n');

    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5c", s[i]);
    }
    putchar('\n');
}

void check_characters(char *s)
{
    print_header("is_alnum()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", isalnum(s[i]));
    }
    putchar('\n');

    print_header("isalpha()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", isalpha(s[i]));
    }
    putchar('\n');

    print_header("iscntrl()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", iscntrl(s[i]));
    }
    putchar('\n');

    print_header("isdigit()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", isdigit(s[i]));
    }
    putchar('\n');

    print_header("isgraph()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", isgraph(s[i]));
    }
    putchar('\n');

    print_header("islower()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", islower(s[i]));
    }
    putchar('\n');

    print_header("isprint()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", isprint(s[i]));
    }
    putchar('\n');

    print_header("ispunct()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", ispunct(s[i]));
    }
    putchar('\n');

    print_header("isspace()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", isspace(s[i]));
    }
    putchar('\n');

    print_header("isupper()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", isupper(s[i]));
    }
    putchar('\n');

    print_header("isxdigit()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5d", isxdigit(s[i]));
    }
    putchar('\n');

    print_header("tolower()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5c", tolower(s[i]));
    }
    putchar('\n');

    print_header("toupper()", s);
    for (int i = 0; i <= strlen(s); i++)
    {
        printf("%5c", toupper(s[i]));
    }
    putchar('\n');
}

int main()
{
    char line[31];
    gets(line);
    check_characters(line);

    return EXIT_SUCCESS;
}