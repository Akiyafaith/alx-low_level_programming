#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line using a character __.
 * @n: The number of _ characters to be printed out.
 * Return: returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
	_putchar('_');
	}
	_putchar('\n');
}
