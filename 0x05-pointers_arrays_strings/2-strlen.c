#include "main.h"


/**
 * _strlen - calculate the length of a string
 * @s: is a character
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;


	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
