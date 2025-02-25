#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sign of the number
 * @n: int
 * Prints the sign
 * Return: 1 if greater than 0 and viceversa
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return(0);
	}
}
