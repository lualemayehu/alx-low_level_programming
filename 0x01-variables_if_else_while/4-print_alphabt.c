#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Program prints alpahabates in lower case
 */

int main(void)
{
	char n = 'a';

	while (n < '{' && (n != 'e' || n !='q'))
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
