#include <stdio.h>
#include "main.h"
/**
 * main - print function
 * function to print
 * Return: 0 if success
 */
void print_alphabet(void)
{
	int a;
	for (a = 0; a<26; a++)
		_putchar(97+a);
	_putchar('\n');
}
