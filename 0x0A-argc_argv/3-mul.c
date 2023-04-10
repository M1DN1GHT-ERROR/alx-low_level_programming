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
	if (argc < 3)
	{
		printf("ERROR\n");
		return (1);
	}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

