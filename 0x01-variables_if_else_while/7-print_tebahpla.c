#include<stdio.h>

/**
 * main - entry point
 *
 * description: print alpha in reverse
 *
 * Return: always 0
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
