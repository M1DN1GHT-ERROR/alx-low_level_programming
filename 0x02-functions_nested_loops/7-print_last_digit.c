#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number to process
 *
 * Return: The value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit = abs(num % 10);

	_putchar(last_digit + '0');
	return (last_digit);
}
