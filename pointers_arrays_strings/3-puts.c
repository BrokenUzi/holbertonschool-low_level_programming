#include <stdio.h>
#include "main.h"
/**
* _puts - Prints a string followed by a \n
*
* @str: Pointer to the string
*
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	putchar('\n');
}
