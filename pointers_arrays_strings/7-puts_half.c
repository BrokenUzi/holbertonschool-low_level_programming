#include <stdio.h>
#include "main.h"
/**
* puts_half - prints half of a string
*
* @str: Points to the string
*
* Return: void
*
*/
void puts_half(char *str)
{
	int j, d, m;

	j = 0;

	while (str[j] != '\0')
	(j++);

	m = (j % 2);
	if (m == 1)
	(j++);

	for (d = (j / 2); str[d] != '\0'; d++)
	_putchar(str[d]);

	_putchar('\n');
}
