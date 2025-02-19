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
	char ch = '0';

	for (alphabet = 0; alphabet <= 15; alphabet++)
		if (alphabet < 10)
			putchar(ch++);
		else
			putchar('a'+(alphabet-10));
	putchar('\n');
	return (0);
}
