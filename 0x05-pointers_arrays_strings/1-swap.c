#include "main.h"
/**
 * swap_int - swap two ints
 * @p1: first int
 * @p2: second int
 */

void swap_int(int *p1, int *p2)
{
	int temp;
	
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
