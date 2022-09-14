#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	printPutchar();
	return (0);
}

/**
 * printPutchar - prints out the string character
 *
 * Description: uses the write function
 * prints out string with a new line
 * Return: _putchar
 */
int printPutchar(void)
{
	char putchar[] = "_putchar\n";

	return (write(1, putchar, strlen(putchar)));
}
