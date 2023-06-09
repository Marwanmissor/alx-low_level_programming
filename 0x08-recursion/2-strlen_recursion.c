#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @xox: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *xox)
{
	if (*xox == '\0')
		return (0);
	return (1 + _strlen_recursion(xox + 1));
}

