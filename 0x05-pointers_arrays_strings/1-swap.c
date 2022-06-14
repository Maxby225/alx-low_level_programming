#include <max.h>
/**
 * swap_int - swaps the values of two integers
 * @a: first value
 * @b: second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
        int n = *a;
        *a = *b;
        *b = n;
}

