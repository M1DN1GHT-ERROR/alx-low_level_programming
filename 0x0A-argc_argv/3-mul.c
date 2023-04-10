#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguments counter
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	i = atoi (argv[1]);
	j = atoi (argv[2]);

printf("%d\n", i * j);
return (0);
}

