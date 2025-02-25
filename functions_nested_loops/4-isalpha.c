#include <stdio.h>
#include "main.h"

/**
 * _isalpha - lower func
 * @c: int
 * determines if char is lower case or upper case
 * Return: 1 if lower, 0 if upper
 */

int _isalpha(int c)
{
	if ((c > 96) & (c < 123))
		return (1);
	if else ((c > 65) & (c < 90))
		return (1);
	else
		return (0);
}
