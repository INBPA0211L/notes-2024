#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[31];
    char city[31];
    int runways;
    int time;
} AIRPORT;

int cmp(const void *a, const void *b)
{
    AIRPORT *left = (AIRPORT *)a;
    AIRPORT *right = (AIRPORT *)b;

    if (left->runways != right->runways)
    {
        return -(left->runways - right->runways);
    }

    if (left->time != right->time)
    {
        return -(left->time - right->time);
    }

    return strcmp(left->name, right->name);
}

int main()
{
    char line[101];

    int length = atoi(gets(line));
    AIRPORT airports[length];

    for (int i = 0; i < length; i++)
    {
        gets(line);
        strcpy(airports[i].name, strtok(line, ";"));
        strcpy(airports[i].city, strtok(NULL, ";"));
        airports[i].runways = atoi(strtok(NULL, ";"));
        airports[i].time = atoi(strtok(NULL, ";"));
    }

    qsort(airports, length, sizeof(AIRPORT), cmp);

    for (int i = 0; i < length; i++)
    {
        printf("%s (%s): %d\n", airports[i].name, airports[i].city, airports[i].time);
    }

    return EXIT_SUCCESS;
}