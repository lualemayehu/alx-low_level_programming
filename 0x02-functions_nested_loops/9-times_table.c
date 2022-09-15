#include <stdio.h>
#include "main.h"
/**
 * times_table - time table
 *
 * Return: last digit
 */

void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			printf("%d, ", n);
		}
		printf("\n");
	}
}
