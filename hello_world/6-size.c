#include<stdio.h>
/**
 * Main - Entry poin
 * Function to print type sizes
 * Return: 0 if successful
 */
int main(void)
{
	int IntType;
	float FloatType;
	char CharType;
	long int LongInt;
	long long int BigInt;

	printf("Size of a char: %zu byte(s)\n", sizeof(CharType));
	printf("Size of an int: %zu byte(s)\n", sizeof(IntType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(LongInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(BigInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(FloatType));

	return (0);
}
