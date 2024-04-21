#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 21

void dump_array(char *s, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("[%2d] #%p *%c* (%d)\n", i, &s[i], s[i], s[i]);
    }
}

int main()
{
    char line[LENGTH];
    gets(line);

    puts(line);

    char *token = strtok(line, ";");
    while (token)
    {
        printf("%p *%s*\n", token, token);
        dump_array(line, LENGTH);
        token = strtok(NULL, ";");
        getchar();
    }

    return EXIT_SUCCESS;
}