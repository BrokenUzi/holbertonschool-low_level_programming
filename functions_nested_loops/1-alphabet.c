#include <stdio.h>
#include "main.h"
/**
* main - putchar which is used to write a chracter to the standard
* betty style doc for function main goes there
* Return: always 0
* a-z is the char for the entire alphabet in lowecase
*
*/
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		(letter++);
	}

	putchar('\n');

	return (0);
}
