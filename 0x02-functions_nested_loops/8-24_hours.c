#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - display 24 hour clock
 *
 * Return: void
 */

void jack_bauer (void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for ( k = 0; k <=9 ; k++)
			{
				for (l = 0; l <=9; l++)
				{
					printf("%d%d : %d%d\n", i,j,k,l);
				}
			}
		}
	}
}
