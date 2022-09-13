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
	int n;
	int c = 44;

	for (n = 48; n< 58 ; n++)
	{
		if (n == 48)
		{
			putchar(n);
		}
		else
		{
			putchar(c);
			putchar(n);
		}
	}
	putchar('\n');
	return (0);	
}
