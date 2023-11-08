#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - check the code for the school stuadents
 * @argc: the number of args
 * @argv: argumant vector
 * Return: Always 0
*/

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
		printf("error\n"), exit(1);
	b = atoi(argv[1]);
	if (b < 0)
		printf("error\n"), exit(2);
	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
