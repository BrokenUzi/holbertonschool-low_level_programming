#include <stdio.h>

/**
* main - prints its name
*
* @argc: number of command line arguments
*
* @argv: prints its name
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
return (0);
}
