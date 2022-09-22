#include "main.h"
/**
 * print_numbers - Program prints numbers with a single degit starting from 0
 *
 * Return: has no return type
 */
void print_numbers(void)
{
	char n = '0';
	
	while (n < ':')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
