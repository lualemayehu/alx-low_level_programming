#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if the input is upper case
 *
 *@c: it takes integer parameter c as an input
 *
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{

	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
