#include <stdio.h>
/**
* main - putchar which is used to write a chracter to the standard
* betty style doc for function main goes there
* Return: always 0
*  prints all possible combinations of single-digit numbers.
*
*/
int main(void)
{
	int number = 0;

	while (number < 10)
	{
	putchar('0' + number);
	if (number < 9)
		{
		putchar(',');
		putchar(' ');
		}
	number++;
	}
	putchar('\n');
	return (0);
}
