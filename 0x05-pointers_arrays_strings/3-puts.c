#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str++);
	}
	_puts('\n');
}