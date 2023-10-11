#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stduot
 * @c: the character to print
 *
 * Return: on succss 1.
 * on error, -1 is returned, and errno is set appropritately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
