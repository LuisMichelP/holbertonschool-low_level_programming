#include <stdio.h>
#include "main.h"
/**
 * main - function to printchar
 * print by for
 * Return 0: if successful
 */

int main (void)
{
	char a;
	for (a = "a"; a <= "z"; a++)
		_putchar(a);
	_putchar("\n");
}
