#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @g: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int g)
{
	if (g < 0)
		return (-1);
	if (g == 0)
		return (1);
	return (g * factorial(g - 1));
}

