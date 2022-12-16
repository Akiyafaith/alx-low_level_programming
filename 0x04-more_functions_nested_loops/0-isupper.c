#include "main.h"

/**
 * _isupper - this is a function to check upper case alphabets
 * @c: an integer parameter
 * Return: i if character is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
