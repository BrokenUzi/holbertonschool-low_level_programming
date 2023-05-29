#include <stdio.h>
/**
* main - putchar which is used to write a chracter to the standard
* betty style doc for function main goes there
* Return: always 0
* prints all single digit numbers of base 10 starting from 0
*
*/
int main(void)
{
	int number = 0;

	while (number < 16)
{
	if (number < 10)
	{
		putchar('0' + number);
	}
	else
	{
	putchar('a' + number - 10);
	}
	number++;
}

	putchar('\n');

return (0);
}
