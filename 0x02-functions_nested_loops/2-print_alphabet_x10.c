#include "main.h"

/**
 * print_alphabet_x10 - prints all a-z on 10 lines
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	while (i < 11)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

