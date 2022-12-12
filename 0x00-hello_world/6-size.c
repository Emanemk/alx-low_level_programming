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
	printf("Size of char: %i byte\n", sizeof(char));
	printf("Size of int: %i byte\n", sizeof(int));
	printf("Size of long int: %i byte\n", sizeof(long int));
	printf("Size of long long int: %i byte\n", sizeof(long long int));
	printf("Size of float: %i byte\n", sizeof(float));

	return (0);
}
