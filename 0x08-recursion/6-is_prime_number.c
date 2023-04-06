#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * is_prime_number - checks if a number is prime
 * emyy st yle
 * @n: the number to check
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);

	return (is_prime_supporter(n, 3));
}

/**
 * is_prime_supporter - recursive supporter function for is_prime_number()
 * @n: the integer to check
 * @divisor: the divisor to test
 * emmy st yle
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_supporter(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (is_prime_supporter(n, divisor + 2));
}
