#include "main.h"

/**
 * print_last_digit - prints last digit of i
 * @i: number
 *
 * Return: value of the last digit of i
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	_putchar(last_digit + '0');
}
