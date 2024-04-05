#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *ev)
{
    printf("argc: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("[%02d] #%p %p *%s*\n", i, &argv[i], argv[i], argv[i]);
    }
    printf("[%02d] #%p %p\n", argc, &argv[argc], argv[argc]);

    puts("===");

    char **actual = argv;
    while (*actual)
    {
        puts(*actual);
        actual++;
    }

    return EXIT_SUCCESS;
}