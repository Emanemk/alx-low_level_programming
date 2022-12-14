#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: is the int used for argument of the function
 *
 * Return: int
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}
