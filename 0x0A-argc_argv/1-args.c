#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments passed
 * @argv: the array of arguments
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__))**argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
