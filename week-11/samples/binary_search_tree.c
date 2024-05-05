#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct element
{
    int value;
    struct element *left;
    struct element *right;
} ELEMENT;

ELEMENT *create(int value)
{
    ELEMENT *node = (ELEMENT *)calloc(1, sizeof(ELEMENT));
    node->value = value;
    return node;
}

ELEMENT *insert(ELEMENT *actual, int value)
{
    if (value < actual->value)
    {
        if (actual->left)
        {
            return insert(actual->left, value);
        }
        else
        {
            actual->left = create(value);
            return actual->left;
        }
    }
    else if (actual->value < value)
    {
        if (actual->right)
        {
            return insert(actual->right, value);
        }
        else
        {
            actual->right = create(value);
            return actual->right;
        }
    }
    else
    {
        fprintf(stderr, "%d is already in the tree\n", value);
        return NULL;
    }
}

int size(ELEMENT *actual)
{
    return actual == NULL ? 0 : 1 + size(actual->left) + size(actual->right);
}

void inorder(ELEMENT *node)
{
    if (node != NULL)
    {
        inorder(node->left);
        printf("%3d", node->value);
        inorder(node->right);
    }
}

void preorder(ELEMENT *node)
{
    if (node != NULL)
    {
        printf("%3d", node->value);
        inorder(node->left);
        inorder(node->right);
    }
}

void postorder(ELEMENT *node)
{
    if (node != NULL)
    {
        inorder(node->left);
        inorder(node->right);
        printf("%3d", node->value);
    }
}

int contains(ELEMENT *actual, int value)
{
    if (actual == NULL)
    {
        return 0;
    }
    if (actual->value == value)
    {
        return 1;
    }
    return contains(value < actual->value ? actual->left : actual->right, value);
}

void clear(ELEMENT *actual)
{
    if (actual)
    {
        clear(actual->left);
        clear(actual->right);
        free(actual);
    }
}

int main()
{
    ELEMENT *root = NULL;

    char line[101];
    while (gets(line))
    {
        char *command = strtok(line, " ");

        if (strcmp(command, "create") == 0)
        {
            clear(root);
            root = create(atoi(strtok(NULL, " ")));
        }
        else if (!root)
        {
            fprintf(stderr, "You must create a list first!\n");
        }
        else if (strcmp(command, "insert") == 0)
        {
            insert(root, atoi(strtok(NULL, " ")));
        }
        else if (strcmp(command, "contains") == 0)
        {
            printf("%d\n", contains(root, atoi(strtok(NULL, " "))));
        }
        else if (strcmp(command, "inorder") == 0)
        {
            inorder(root);
            putchar('\n');
        }
        else if (strcmp(command, "preorder") == 0)
        {
            preorder(root);
            putchar('\n');
        }
        else if (strcmp(command, "postorder") == 0)
        {
            postorder(root);
            putchar('\n');
        }
        else if (strcmp(command, "clear") == 0)
        {
            clear(root);
            root = NULL;
        }
        else if (strcmp(command, "size") == 0)
        {
            printf("Size of the tree: %d\n", size(root));
        }
    }

    clear(root);

    return EXIT_SUCCESS;
}