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
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}