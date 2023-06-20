#include <stdio.h>

/**
* main - prints how many arguemnts are passed thru the command line
*
* @argc: number of command line arguments
*
* @argv: 
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
return (0);
}
