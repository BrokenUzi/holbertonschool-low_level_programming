#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - prints a-z 10x
* betty style doc for function main goes there
*
*/
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count < 10)
	{
	letter = 'a';

	while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}

	count++;
	}
	putchar('\n');
}
