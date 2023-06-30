#include <stdio.h>

/**
* main - prints all arguments it receives
*
* @argc: number of command line arguments
*
* @argv: executes argument when program is ran thru it
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int x = 0;

	if (argc)
	{
		for (; argv[x]; x++)
			printf("%s\n", argv[x]);
	}

	return (0);
}
