#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers fron 1-100 but multiples of three
 * Fizz is printed in place of the no
 * Buzz in place of the multiplesof 5 and FizzBuzz for both five and three
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 3) == 0 && (n % 5) == 0)
	{
	printf("FizzBuzz");
	}
	else if ((n % 3) == 0)
	{
	printf("Fizz");
	}
	else if ((n % 5) == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", n);
	}
	if (n == 100)
	{
	continue;
	}
	printf(" ")
	}
	printf("\n");
	return (0);
}
