#include "main.h"
#include <ctype.h>
/**
 * _isdigit- checks if the input is a number betwin 0 -9 
 *
 *@c: it takes integer parameter c as an input
 *
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{

	if (isdigit(c))
	{
		return (1);
	}
	else
		return (0);
}
