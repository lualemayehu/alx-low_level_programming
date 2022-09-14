#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * print_last_digit - display last digit
 * 
 *@c: it takes integer parameter c as an input
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	_putchar(i);
	return (i);
}
