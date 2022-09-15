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
	char j;

	if (n < 0)
	{
		n = n * -1;
		n = (n % 10);
		j = (char)n;
		_putchar(j);
		return (n);
	}
	else if (n > 0)
	{
		n = (n % 10);
		j = (char)n;
		_putchar(j);
		return (n);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	return (0);
}
