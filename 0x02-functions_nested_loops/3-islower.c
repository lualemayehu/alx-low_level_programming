#include "main.h"
/**
 * _islower - checks if the input is lower case
 *
 *@c: it takes integer parameter c as an input
 *
 * Return: 1 if true and 0 if false
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
		return (0);
}
