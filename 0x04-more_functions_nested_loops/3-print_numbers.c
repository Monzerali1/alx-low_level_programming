#include "main.h"

/**
 * print_numbers - print 0 - 9
 *		onle using _putchar twice
 *
 * Return: always 0
*/

void print_numbers(void);
{
	int c = 0;

	do {
		_putchar(c + 48);
		c++;
	} while (c >= 0 && c <= 9);
	_putchar('\n');
}
