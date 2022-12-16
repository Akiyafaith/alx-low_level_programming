#include "main.h"

/**
 * print_diagonal - this draws a diagonal line
 * @n: the mumber of \ character to be drawn
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int line, gap;

	if (n > 0)
	{
	for (line = 0; line < n; line++)
	{
	for (gap = 0; gap < line; gap++)
	{
	_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
