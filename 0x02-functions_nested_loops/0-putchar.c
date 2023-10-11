#include "main.h"

/**
 * main - print _putchar
 *
 * description: print _putchar using putchar prototype
 *
 * return: always 0 (succss)
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;
	/* tis is the main function */
	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
	/* it returns 0 to indicate successful execution */
	return (0);
}
