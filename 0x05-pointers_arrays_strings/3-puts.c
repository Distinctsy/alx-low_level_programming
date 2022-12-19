#include "main.h"

/**
 * _puts - print a string into the stdout
 * @str: the string
 * Return: string length
 */

void _puts(char *str)
{
	int y = 0;

	while (str[y] != '\0')
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');

}
