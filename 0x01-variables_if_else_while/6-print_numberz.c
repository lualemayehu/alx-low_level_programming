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
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
