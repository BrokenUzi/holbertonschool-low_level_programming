#include <stdio.h>
#include "main.h"
/**
* swap_int - swaps the values of 2 int's
*
* @a: points to 1st int
*
* @b: points to 2nd int
*
* Return: void
*
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
