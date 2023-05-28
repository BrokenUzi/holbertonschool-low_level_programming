#include <stdio.h>
/**
* main - putchar which is used to write a chracter to the standard
* betty style doc for function main goes there
* Return: always 0
* z-a is the char for the entire alphabet reversed andin lowecase
*/

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		(letter);
		letter--;
	}

	putchar('\n');

	return (0);

}
