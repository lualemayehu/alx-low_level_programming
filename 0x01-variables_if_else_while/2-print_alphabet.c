#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Program prints alpahabates in lower case
 */

int main(void)
{
	char n = 'a';
	while (n < 'z')
	{
		putchar(n);
                n++;
	}
	return (0);
}
