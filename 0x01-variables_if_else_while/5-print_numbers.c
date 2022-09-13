#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Program prints numbers with a single degit starting from 0 
 */

int main(void)
{
	char n = '0';

	while (n < ':')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
