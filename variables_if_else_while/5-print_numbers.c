#include <stdio.h>
/**
* main - putchar which is used to write a chracter to the standard
* betty style doc for function main goes there
* Return: always 0
* prints all single digit numbers of base 10 starting from 0.
*
*/
int main(void)
{
	char digit = '0';

	while (digit <= '9')
{
		putchar(digit);
		digit++;
}

	putchar('\n');
	return (0);
}
