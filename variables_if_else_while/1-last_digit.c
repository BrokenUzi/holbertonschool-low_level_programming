#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - function is the srand which generates a random number
* betty style doc for function main goes there
* Return: always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is greater than 5: the string and is greater than 5\n", n);
	if (n == 0)
		printf("%d is 0: the string and is 0\n", n);
	if (n < 0)
		printf("%d is less than 6 and not 0: the string and is less than 6 and not 0\n", n);

	return (0);
}
