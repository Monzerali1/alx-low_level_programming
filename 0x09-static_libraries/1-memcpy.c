#include "main.h"

/**
 * *_memcpy - function copies @n bytes from memory area src
 * to memory area @dest
 *
 * @dest: function copies
 * @src: bytes from area
 * @n: to aera
 *
 * Return: ponter @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
