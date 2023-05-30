#include <stdio.h>
#include "main.h"
/**
* print_alphabet - a-z is the char for the entire alphabet in lowecase
* betty style doc for function main goes there
* Return: always 0
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
}
