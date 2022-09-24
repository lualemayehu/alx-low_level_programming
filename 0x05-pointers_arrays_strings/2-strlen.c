#include "main.h"
/**
 * _strlen - count number of a string
 * @s: string pointer
 *
 * Return: number of strings
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; ++i)
		count++;
	return (count);
}
