[↑ Back](../README.md)

# Week #06

## Topics

Data structures and built-in functions #2 (1D character arrays, strings, dynamic memory allocation).

## Agenda

1. Handling charter arrays and strings in the `main` function.
2. Passing strings to functions.
3. Returning strings from functions.
4. The built-in functions for handling strings and characters (`string.h`, `ctype.h`, and `stdio.h`).
5. The built-in functions for managing dynamic memory allocations (`stdlib.h`).

## Sample codes

1. [`test_string`](./samples/test_string.c)
4. [`test_ctype.c`](./samples/test_ctype.c)
2. [`test_malloc.c`](./samples/test_malloc.c)
3. [`test_calloc.c`](./samples/test_calloc.c)

## Exercises

### Permuted exercise sets

1. [`P1051` Strings - removing characters](./exercises/P1051/README.md)
1. [`P1052` Strings - duplicating characters](./exercises/P1052/README.md)
1. [`P1053` Strings - modifying characters](./exercises/P1053/README.md)

### ProgCont exercises

1. [`PC200504` Sentence-ending punctuation](./exercises/PC200504.md)
1. [`PC200508` Counting Lines](./exercises/PC200508.md)
1. [`PC200512` THE END](./exercises/PC200512.md)

## Highlights

### Representation of strings

* Language C represents strings as character sequences.
* A character is represented by its ASCII code.
* A string is identified by its start memory address.
* A string is terminated by the `0` ASCII code (literal `'\0'`).

### Handling strings

* Use the functions of header `string.h` if it is possible to manipulate strings and get their length.
* Use the functions of header `ctype.h` to categorize and convert characters. It is possible that this header does not have your required, specific function. In this case, try to implement your custom logic using the function `strchr` and the other `ctype.h` functions.
* Do not mix the invocations of functions `scanf` and `gets`. You can expect an empty string from the invocation of function `gets` just after a `scanf` invocation. Use only function `gets` and try to yield your `int` and `double` types using functions `atoi` and `atof`.

### Allocating in the heap

* By using static (classic) array declarations, all your allocated memory will be in the stack. These spaces will be de-allocated immediately after you return from the function. Thus, it is impossible to return their addresses from the functions (to be honest you can return them, but the values values cannot be used in the caller function).
* You can reserve memory in the heap by using functions `calloc` and `malloc`. In this case, the de-allocation of the given memory segment is your responsibility too. Thus, it is mandatory to use the function `free` for this reason.

### Functions

In this section, we list all the functions that should be known starting this week. You know a function if you can invoke it correctly using [the official C reference](https://arato.inf.unideb.hu/panovics.janos/stdc.pdf).

#### Functions of `stdio.h` for I/O handling

* `char *gets(char *start)`
  * Reads the next line of the standard input to the memory address `start`.
  * Returns:
    * `NULL` if the case of `EOF`.
    * the memory address `start` otherwise
* `int puts(char *start)`
  * Writes the string at memory address `start` to the standard output. Also prints a newline character.
  * Returns: *not important*

#### Functions of `stdlib.h` for data conversion

* `double atof(char *s)` - Returns the `double` value of the given string.
* `int atoi(char *s)` - Returns the `int` value of the given string.

### Functions of `string.h`

* `size_t strlen(char *s)`
  * Counts the characters until the first `0` ASCII code.
  * Returns the length of parameter `s`.
* `char *strcpy(char *left, char *right)`
  * Copies parameter `right` to the memory address of parameter `left`.
  * Returns the memory address of parameter `left`.
* `char *strcat(char *left, char *right)`
  * Concatenates parameter `right` to the value of parameter `left`.
  * Returns the memory address of parameter `left`.
* `int strcmp(char *left, char *right)`
  * Compares parameters `left` and `right` based on their alphabetical order. The ASCII values are used in the comparison.
  * Returns `0` if the two strings are equal.
  * Returns `-1` if the parameter `left` goes first in the order.
  * Returns `1` if the parameter `right` goes first in the order.
* `char *strchr(char *s, char c)`
  * Determines the first position of character `c` in string `s`.
  * Returns the memory address of the first occurrence of `c` in `s`.
  * Returns `NULL` if `s` does not contain `c`.
* `char *strchr(char *s, char *p)`
  * Determines the first position of string `p` in string `s`.
  * Returns the memory address of the first occurrence of `p` in `s`.
  * Returns `NULL` if `s` does not contain `p`.
* `char *strrchr(char *s, char c)`
  * Determines the last position of character `c` in string `s`.
  * Returns the memory address of the last occurrence of `c` in `s`.
  * Returns `NULL` if `s` does not contain `c`.
* `char *strrchr(char *s, char *p)`
  * Determines the last position of string `p` in string `s`.
  * Returns the memory address of the last occurrence of `p` in `s`.
  * Returns `NULL` if `s` does not contain `p`.

### Functions of `stdlib.h`

* `void *malloc(size_t size)`
  * Allocates a memory segment with the number of `size` bytes.
  * Returns the start memory address of the allocated memory segment.
* `void *calloc(size_t number, size_t element_size)`
  * Allocates a memory segment for `number` elements, each having the size of `element_size` bytes.
  * Returns the start memory address of the allocated memory segment.
* `void free(void *address)`
  * De-allocates the memory segment allocated for the given start memory address using `malloc` and `calloc` functions.

### Functions of `ctype.h`

The following functions return a logic value determining whether the given parameter belongs to a specific category of characters:

* `int isalnum(char c)` - Returns whether character `c` is alphanumeric.
* `int isalpha(char c)` - Returns whether character `c` is alphabetic.
* `int iscntrl(char c)` - Returns whether character `c` is control.
* `int isdigit(char c)` - Returns whether character `c` is a decimal digit.
* `int isgraph(char c)` - Returns whether character `c` is a printable character.
* `int islower(char c)` - Returns whether character `c` is lowercase.
* `int ispunct(char c)` - Returns whether character `c` is neither a control nor an alphanumeric character.
* `int isspace(char c)` - Returns whether character `c` is a whitespace character.
* `int isupper(char c)` - Returns whether character `c` is uppercase.
* `int isxdigit(char c)` - Returns whether character `c` is a hexadecimal digit.

The following functions return a character according to their description:

* `int tolower(char c)` - Returns the lowercase version of character `c`.
* `int toupper(char c)` - Returns the uppercase version of character `c`.