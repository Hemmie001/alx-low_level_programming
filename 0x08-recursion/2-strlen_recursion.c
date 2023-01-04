#include "main.h"

/**
 *  * _strlen_recursion - This  Returns the length of a string.
 *  * @s: This measures the string.
 *  * Return: Thi returns the length of the string.
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
