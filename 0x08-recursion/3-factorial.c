#include "main."
/**
* factorial - process the factorial of a given integer
* @n: the integer to find its factorial
* Return: an integer
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
