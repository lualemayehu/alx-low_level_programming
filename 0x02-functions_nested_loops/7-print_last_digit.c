#include "main.h"
/**
 * print_last_digit - display last digit
 *
 * @n: it takes integer parameter n as an input
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % 10 * -1;
		_putchar(n + '0');
		return (n);
	}
	else if (n > 0)
	{
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return (n);
	}
	return (0);
}
