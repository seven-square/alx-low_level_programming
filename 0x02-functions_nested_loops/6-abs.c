#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: integer argument of which to compute an absolute value
 *
 * Return: absolute value of integer i
 */
int _abs(int i)
{
	if (i < 0)
	{
		i *= -1;
		printf("%d\n", i);
	}
	else
	{
		printf("%d\n", i);
	}
}
