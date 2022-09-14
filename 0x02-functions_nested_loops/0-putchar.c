#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n',};
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
