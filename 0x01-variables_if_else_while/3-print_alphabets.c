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
	char c = 'A';

	while (n < '{')
	{
		putchar(n);
		n++;
	}
	while (c < '[')
        {
                putchar(c);
                c++;
        }

	putchar('\n');
	return (0);
}
