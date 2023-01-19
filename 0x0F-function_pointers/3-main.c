#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *  main - Prints the result of simple operations
 *  @argc: The number of arguments supplied to the program.
 *  @argv: an array of pointers to the argument
 *
 *  Return:Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num0, num1;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num0 = atoi(argv[i]);
	op = argv[2];
	num1 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		print("Error\n");
		exit(99);
	}

	if ((*op == '/' && num1 == 0) || (*op == '%' && num1 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	print("%d\n", get_op_func(op)(num0, num1));

	return (0);
}
