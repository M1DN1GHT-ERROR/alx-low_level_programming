#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: arguments counter
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
 *
 */

int main(int argc, char *argv[])
{
	int n, m, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (m = 0; argv[n][m] != '\0'; m++)
		{
			if (argv[n][m] < '0' || argv[n][m] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[n]);
	}
	printf("%d\n", sum);
	return (0);
}
