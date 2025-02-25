#include <stdio.h>
#include "main.h"

/**
 * _islower - lower func
 * determines if char is lower case or upper case
 * Return: 1 if lower, 0 if upper
 */

void _islower(int c)
{
	if ((c > 96) & (c < 123))
		return (1);
	else
		return (0);
}
