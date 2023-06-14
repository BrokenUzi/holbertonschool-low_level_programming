#include <stdio.h>
#include "main.h"

/**
* _puts_recursion - prints a string followed by newline
*
* @s: string
*
* Return: void
*/

void _puts_recursion(char *s)
{
	printf("%d", *s);

	_puts_recursion(s + 1);
}
