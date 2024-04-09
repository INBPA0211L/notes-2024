#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LENGTH 101

char **read_lines(int n)
{
    // with the length of n+1 we would exactly get the argv structure
    char **lines = (char **)calloc(n, sizeof(char *));
    char buffer[LENGTH];
    for (int i = 0; i < n; i++)
    {
        gets(buffer);
        lines[i] = (char *)calloc(strlen(buffer) + 1, sizeof(char));
        strcpy(lines[i], buffer);
    }
    return lines;
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);

    char **lines = read_lines(n);
    for (int i = 0; i < n; i++)
    {
        printf("[%02d] #%p %p *%s*\n", i, &lines[i], lines[i], lines[i]);
    }

    for (int i = 0; i < n; i++)
    {
        free(lines[i]);
    }
    free(lines);

    return EXIT_SUCCESS;
}