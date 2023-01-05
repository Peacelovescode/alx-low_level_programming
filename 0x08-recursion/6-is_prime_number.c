#include "main.h"

int check_prime(int, int);
/**
* is_prime_number - pprime number identifier
* @n: is an  integer
* Return: the prime number
*/

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
* check_prime - checks for prime numbers
* @n: number
* @i: iterator
* Return: a prime number
*/
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < 1)
		return (1);
	return (check_prime(n, i + 1));
}
