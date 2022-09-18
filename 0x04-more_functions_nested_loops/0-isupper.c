#include "main.h"
/**
 * _islower - checks if the input is lower case
 *
 *@c: it takes integer parameter c as an input
 *
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
		return (0);
}
