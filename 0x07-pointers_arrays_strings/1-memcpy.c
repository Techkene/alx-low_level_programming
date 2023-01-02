#include "main.h"

/**
 * _memcpy - The _memcpy() function copies memory area
 * @dest: area where bytes are copied to
 * @src: area where bytes are copied from
 * @n: number of bytes to copy
 * Return: returns a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest)
}
