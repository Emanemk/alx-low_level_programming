#include<stdio.h>

/***
 * main - entry point
 *
 * Description: print alpha in lower case
 *
 * Return: return value of main is always 0
 */

int main(void)

{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)

	{
		putchar(lc);
	}

	putchar('\n');

	return (0);
}

