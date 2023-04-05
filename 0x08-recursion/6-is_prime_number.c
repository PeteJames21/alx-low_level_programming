#include "main.h"

/**
* is_prime_number - test the primality of a number
* @n: number to be tested
*
* Return: 1 if prime, else 0
*/
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}


/**
* is_prime - test the primality of a number
* @n: number to be tested
* @i: test divisor to use on n
*
* Return: 1 if prime, else 0
*/
int is_prime(int n, int i)
{
	/* n is prime if it lacks a divisor in the range [2, sqrt(n)] */
	if (n <= 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i >= n)
		return (1);

	return (is_prime(n, i + 1));
}
