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

	while (n < 58)
	{
		int c = n;
		while (c < 58)
		{
			putchar(c);
			putchar(n);
			n++;
			c++;
		}
	}
	putchar('\n');
	return (0);
}
