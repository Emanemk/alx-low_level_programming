#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print alpha in lower and upper case
 *
 * Return: return value of main is always 0
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)

	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

