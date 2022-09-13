#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Program prints numbers with a single degit starting from 0
 */

int main(void)
{
	int n = 48;
	int c = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
