#include <unistd.h>

/**
 * main - prints exactly and that piece of art is useful
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", 61);
	return (1);
}
