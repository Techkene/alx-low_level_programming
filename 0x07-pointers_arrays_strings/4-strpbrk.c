#include "main.h"
/**
 * _strpbrk - The _strpbrk() function locates the first
 * occurrence in the string s of any of the bytes in
 * the string accept
 *
 * @s: string where searched bytes are located
 * @accept: string where searched bytes are located
 *
 * Return: Returns a pointer to the bytes in s that matches
 * one of the bytes in accept, or NULL if no such bytes is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
