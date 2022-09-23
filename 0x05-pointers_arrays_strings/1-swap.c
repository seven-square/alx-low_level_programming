#include "main.h"

/**
 * swap_int - swaps value of a and b
 * @a: integer a
 * @b: integer b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
