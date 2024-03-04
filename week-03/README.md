[↑ Back](../README.md)

# Week #03

## Topics

Language basics #2 (types, variables, expressions, statements, handling standard I/O, built-in functions, procedures, recursion).

## Agenda

1. The `while` loop
2. The `for` loop
3. The `do while` loop
4. The `break` and `continue` statements in loops
5. Three common types of inputs
6. The ProgCont system's verdict types
7. Further `stdio.h` functions


## Sample codes

1. [`test_while.c`](./samples/test_while.c)
2. [`test_for.c`](./samples/test_for.c)
3. [`test_do_while.c`](./samples/test_do_while.c)
4. [`euclidean_while.c`](./samples/euclidean_while.c)
5. [`euclidean_for_1.c`](./samples/euclidean_for_1.c)
5. [`euclidean_for_2.c`](./samples/euclidean_for_2.c)

## Exercises

### Basic exercises

1. [Arithmetic operators](./exercises/PC200777.md)
2. [Average of integers](./exercises/PC200780.md)
3. [Minimum of integers](./exercises/PC200783.md)
4. [Maximum of integers](./exercises/PC200785.md)
5. [GCD](./exercises/PC200787.md)
6. [Relative primes](./exercises/PC200788.md)
7. [Prime test](./exercises/PC200789.md)
8. [Grading](./exercises/PC200790.md)

### Advanced exercises

1. [TeX Quotes](https://progcont.hu/progcont/100005/?locale=en&pid=272)
2. [Fractions](./exercises/PC200501.md)
3. [Dog contest](./exercises/PC200514.md)

## Highlights

### Boolean (logic) values

Language C doesn't have a boolean (logic) type. Zeroes (having any type) represent `false`, and other values represent `true`.

### Loops

* The middle expression of the loop `for` should be a logical one. There is no other restriction on the expressions.
* The body of the `do while` loops is always being executed before evaluating the expression for the first time.
* Do not want to store a line as a string if you don't know its possible length. You can read the input's characters one by one instead of it.
* Each `for` can be rearranged to be a `while`. The same applies to the other direction.
* You can skip the remaining statements of the block using the `continue` keyword. You can terminate the loop using the `break` keyword. These keywords are the same as they were in Python.

### About End of File (`EOF`)

The End of Line (`EOF`) can be determined based on the returned value of an input function:

* `scanf` returns the number of stored values
* `getchar()` returns the `-1` non-ASCII code

### About division

The `/` (slash) operator performs an integer division between two integer operands. You must have at least one real (`float` or `double`) operand to get a real result. You can explicitly change a type of an expression by so-called casting its value. Thus, you can use one of the following syntaxes:

  * `(double) a / b`
  * `a / (double) b`
  * `(double) a / (double) b`

* Be careful, because syntax

```c
(double) (a / b)
```

does not work. In this case, you first determine the integer result, then convert it to `double`. Thus, the result would be `2.0` for `5 / 2`.

### Header `math.h`

If you have a non-literal expression as some of the `math.h` functions' parameters you may have to use the flag `-lm` in your `gcc` command.

## Required skills

* Be able to use all the loops (`while`, `for`, and `do while`).
* Be able to use the statements `continue` and `break` in loops.
* Be able to process the common input formats.
* Be able to use the ProgCont system and understand the verdicts.
* Be able to understand the returned value and the parameters (arguments) of a built-in function based on the official cheat sheet.
