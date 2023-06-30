#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds argv args
*
* @argc: argument count
*
* @argv: argument vector
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int a = 1;
	int b = 0;
	char *c;

	if (argc > 1)
	{
		for (; a < argc; a++)
		{
			c = argv[a];

			while (*c)
			{
				if (!isdigit(*c))
				{

					printf("Error\n");
					return (1);
				}

				c++;

			}

			b += atoi(argv[a]);
		}

		printf("%d\n", b);
	}

	else
		printf("0\n");

	return (0);
}
