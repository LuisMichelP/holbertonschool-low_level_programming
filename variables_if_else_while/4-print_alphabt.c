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

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	putchar('\n');
	return (0);
}
