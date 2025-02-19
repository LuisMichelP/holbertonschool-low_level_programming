#include <stdio.h>

/**
 * main - print alphabet
 * Function that prints the alphabet
 * with putchar
 * Return: 0 if success
 */

int main(void)
{
        char alphabet;

	for (alphabet = '0'; alphabet <= '9'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
