#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguments count
 * @argv: array of the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	printf("%s\n", argv[a]);
	return (0);
}

