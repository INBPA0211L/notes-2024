#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct element
{
    int value;
    struct element *next;
} ELEMENT;

ELEMENT *create(int value)
{
    ELEMENT *element = (ELEMENT *)calloc(1, sizeof(ELEMENT));
    element->value = value;
    return element;
}

int size(ELEMENT *node)
{
    return node == NULL ? 0 : 1 + size(node->next);
}

ELEMENT *add(ELEMENT *node, int value)
{
    if (node->next)
    {
        return add(node->next, value);
    }
    else
    {
        node->next = create(value);
        return node->next;
    }
}

void print(ELEMENT *node)
{
    if (node)
    {
        printf("%3d", node->value);
        print(node->next);
    }
}

int get(ELEMENT *node, int index)
{
    return index == 0 ? node->value : get(node->next, index - 1);
}

void clear(ELEMENT *node)
{
    if (node)
    {
        clear(node->next);
        free(node);
    }
}

int main()
{
    ELEMENT *list = NULL;

    char line[101];
    while (gets(line))
    {
        char *command = strtok(line, " ");

        if (strcmp(command, "create") == 0)
        {
            clear(list);
            list = create(atoi(strtok(NULL, " ")));
        }
        else if (!list)
        {
            fprintf(stderr, "You must create a list first!\n");
        }
        else if (strcmp(command, "add") == 0)
        {
            add(list, atoi(strtok(NULL, " ")));
        }
        else if (strcmp(command, "get") == 0)
        {
            printf("%d\n", get(list, atoi(strtok(NULL, " "))));
        }
        else if (strcmp(command, "print") == 0)
        {
            print(list);
            putchar('\n');
        }
        else if (strcmp(command, "clear") == 0)
        {
            clear(list);
            list = NULL;
        }
        else if (strcmp(command, "size") == 0)
        {
            printf("%d\n", size(list));
        }
    }

    clear(list);

    return EXIT_SUCCESS;
}