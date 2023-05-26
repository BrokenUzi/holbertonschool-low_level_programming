#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - function is the srand which generates a random number
* betty style doc for function main goes there
* Return: always 0
* LD stands for Last Digit
*/

int main(void)
{
	int n;
	int LD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, LD);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, LD);
	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LD);

	return (0);
}
