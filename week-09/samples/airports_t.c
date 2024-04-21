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

    AIRPORT airports[20];
    int length = 0;

    while (strcmp(gets(line), "END"))
    {
        strcpy(airports[length].name, strtok(line, ";"));
        strcpy(airports[length].city, strtok(NULL, ";"));
        airports[length].runways = atoi(strtok(NULL, ";"));
        airports[length].time = atoi(strtok(NULL, ";"));
        length++;
    }

    qsort(airports, length, sizeof(AIRPORT), cmp);

    for (int i = 0; i < length; i++)
    {
        printf("%s (%s): %d\n", airports[i].name, airports[i].city, airports[i].time);
    }

    return EXIT_SUCCESS;
}