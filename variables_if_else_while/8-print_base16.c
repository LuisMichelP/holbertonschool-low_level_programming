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

	for (alphabet = 0x00; alphabet <= 0x0F; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
