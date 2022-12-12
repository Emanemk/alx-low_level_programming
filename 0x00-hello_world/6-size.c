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
	printf("Size of char: %zu byte\n", sizeof(char));
	printf("Size of int: %zu byte\n", sizeof(int));
	printf("Size of long int: %zu byte\n", sizeof(long int));
	printf("Size of long long int: %zu byte\n", sizeof(long long int));
	printf("Size of float: %zu byte\n", sizeof(float));

	return (0);
}
