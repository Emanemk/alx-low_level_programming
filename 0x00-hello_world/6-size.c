#include<stdio.h>

/**
 * main - entry point
 *
 * descriptio: print sizes of types
 *
 * Return: return value of main is 0 (success)
 *
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of char: %ld byte\n", sizeof(charType));
	printf("Size of int: %ld byte\n", sizeof(intType));
	printf("Size of long int: %ld byte\n", sizeof(longintType));
	printf("Size of long long int: %ld byte\n", sizeof(longlongintType));
	printf("Size of float: %ld byte\n", sizeof(floatType));

	return (0);
}
