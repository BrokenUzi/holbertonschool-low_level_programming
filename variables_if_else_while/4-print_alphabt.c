#include <stdio.h>
/**
* main - putchar which is used to write a chracter to the standard
* betty style doc for function main goes there
* Return: always 0
* a-z is the char for the entire alphabet in lowecase
* it ignores the letter's e and q
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'e' && letter != 'q')
	{
		putchar(letter);
	}
		(letter++);
	}
	putchar('\n');
	return (0);
}
