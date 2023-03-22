#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char for check strlen
 * Return: 0;
 */

int _strlen(char *s)
{
	int a = 0; /* start the counting from 0*/

	for (; *s++;)
		a++;
	return (a);

}
