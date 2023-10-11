#include "main.h"

/**
 * print_sign - print + if n is greater than zero.
 *
 * @c: checks input of function
 *
 * Return: returns 1 if +, 0 if 0 and -1 if -
*/

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
