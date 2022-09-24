#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: input string
 */

void print_rev(char *s)
{
	int i;
	int len;
	
	len = strlen(s);
	for(i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
