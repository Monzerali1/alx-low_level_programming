#include "main.h"
#include <stdio.h>

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
		for (ch = 0; ch < 8; ch++)
			_putchar(str[ch]);
		_putchar('\n');

	return (0);
}
