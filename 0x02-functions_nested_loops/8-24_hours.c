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

	for (i = 0; i <= 2; i++)
	{
		if (i<2)
		{
		for (j = 0; j <= 3; j++)
		{
			for ( k = 0; k <=5 ; k++)
			{
				for (l = 0; l <=9; l++)
				{
					printf("%d%d : %d%d\n", i,j,k,l);
				}
			}
		}
		}
		else
		{
		 for (j = 0; j <= 3; j++)
                {
                        for ( k = 0; k <=5 ; k++)
                        {
			        for (l = 0; l <=9; l++)
                                {
                                        printf("%d%d : %d%d\n", i,j,k,l);
                                }
                        }
                }
		}

	}
}
