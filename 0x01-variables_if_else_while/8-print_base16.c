#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: print all single digit number of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int d;
	char low;

	for (d = 0; d <= '9'; d++)
	{
		putchar(d);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
