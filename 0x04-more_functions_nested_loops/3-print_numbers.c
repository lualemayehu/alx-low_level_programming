#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - display numbers between 0 - 9
 *
 * Return: has no return type
 * Program prints numbers with a single degit starting from 0
 */

void print_number(void)
{
	char n = '0';

	while (n < ':')
	{
		putchar(n);
		n++;
	}
	putchar('\n');	
}
