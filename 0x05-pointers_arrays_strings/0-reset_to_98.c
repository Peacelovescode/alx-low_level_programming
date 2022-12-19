#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - reset integer to 98
 * @n: integer to be replaced
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	*p = n;

	printf("n = %d\n", n);

	*p = 98;
	printf("n = %d\n", p);

	return (0);

}
