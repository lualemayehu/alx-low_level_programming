#include "main.h"
/**
 * print_alphabet 10X- Entry point
 *
 * Program prints alpahabates in lower case 10X
 */

void print_alphabet_x10(void)
{
	char n = 'a';
	int i;

	for (i = 0; i <=10 ; i++)
	{
		while (n < '{')
		{
			_putchar(n);
			_putchar("\n");
			n++;
		}
	}
}
