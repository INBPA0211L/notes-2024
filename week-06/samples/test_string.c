#include <stdio.h>
#include <string.h>

void dump_array(char *s, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("#%d *%c* %d %p\n", i, s[i], s[i], &s[i]);
    }
}

int my_strlen(char *s)
{
    int length = 0;
    // while(s[length] != 0) {
    // while(s[length] != '\0') {
    while (s[length])
    {
        length++;
    }
    return length;
}

int my_strlen2(char *s)
{
    char *end = s;
    while (*end)
    {
        end++;
    }
    return end - s;
}

void my_strcpy(char *left, char *right)
{
    for (int i = 0; i <= strlen(right); i++)
    {
        left[i] = right[i];
    }
}

int main()
{
    char line[51];

    // scanf("%s", line);
    // printf("%s\n", line);
    gets(line);
    puts(line);
    dump_array(line, 11);

    puts(line + 4);

    printf("%d %d %d %d\n",
           strlen(line), sizeof(line),
           my_strlen(line),
           my_strlen2(line));

    // line = "banana";
    strcpy(line, "banana");
    puts(line);
    dump_array(line, 11);

    strcpy(line + 4, "lemon");
    puts(line);
    dump_array(line, 11);

    strcpy(line, "banana");
    my_strcpy(line, "apple");
    puts(line);
    dump_array(line, 11);

    strcpy(line, "lemon");
    strcat(line, " tree");
    puts(line);
    dump_array(line, 11);

    strcpy(line + strlen(line), " test");
    puts(line);
    dump_array(line, 11);

    return 0;
}