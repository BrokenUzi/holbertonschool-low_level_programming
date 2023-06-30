#include <stdio.h>
#include <stdlib.h>

/**
* main - mult 2 args in argv can only do 2 otherwise error
*
* @argc: argument count
*
* @argv: argument vector
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	else
		printf("Error\n");

	return (0);
}
