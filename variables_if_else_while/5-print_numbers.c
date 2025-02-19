#include <stdio.h>

/**
 * main - print alphabet
 * Function that prints the alphabet
 * with putchar
 * Return: 0 if success
 */

int main(void)
{
        int alphabet;

	for (alphabet = 0; alphabet <= 1; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
