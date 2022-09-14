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
	int i;
	int j;

	for(i = 0; i <= 10; i++)
	{
		for(j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar(10);	
	}
}
