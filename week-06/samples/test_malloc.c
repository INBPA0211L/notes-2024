#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 20 // the length used in the allocation

char *foo()
{
    // allocate memory for the string
    char *s = (char *)malloc(LENGTH * sizeof(char));

    // copy the value into the array
    strcpy(s, "Hello, World!");

    // return the start memory address
    return s;
}

int main()
{
    // invoke the function and assign the returned memory address
    char *message = foo();

    // print to the output
    puts(message);

    // dump the memory
    for (int i = 0; i < LENGTH; i++)
    {
        printf("#%d %p %c %d\n", i, &message[i], message[i], message[i]);
    }

    // de-allocate the memory
    free(message);

    return EXIT_SUCCESS;
}