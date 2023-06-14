#include <stdio.h>
#include "main.h"

/**
* cap_string - this capitilizes @a words of a string.
*
* @str: str 2 b capitlized.
*
* Return: pointer 2 the changed string.
*/

char *cap_string(char *str)

{
	int index = 0;

	while (str[index])
		{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		index++;
		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
		str[index] -= 32;
		index++;
		}
	return (str);
}
