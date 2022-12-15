#include "main.h"
/**
 * print_sign - print sign for value of number
 * @n: is a character
 * Return: 1 for greter than zero
 * 0 for equal to zero
 * -1 for less than zero
 */

int print_sign(int n)
{
		if (n < 0)
			_putchar('+');
			return (1);

		else if (n == 0)
			_putchar('0');
			return (0);

		else
			_putchar('-');
			return (-1);
}
