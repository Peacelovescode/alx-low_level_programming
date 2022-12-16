#include "main.h"

/**
 *_isupper - returns uppercase letters
 * @v: input character
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int v)
{
	if (v >= 65 && v <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
