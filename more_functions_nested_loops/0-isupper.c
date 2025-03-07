#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int
 * Return: 1 or 0 deppending
 */

int _isupper(int c)
{
    if ((c > 64) & (c < 91))
		return (1);
	else
		return (0);
}
