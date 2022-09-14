#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Program prints alpahabates in lower case
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for(i = 48; i <= 57; i++)
	{
		for(j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar("\n");	
	}
}
