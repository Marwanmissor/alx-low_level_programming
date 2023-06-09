#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @cd: value to raise
 * @ls: power
 *
 * Return: result of the power
 */
int _pow_recursion(int cd, int ls)
{
	if (ls < 0)
		return (-1);
	if (ls == 0)
		return (1);
	return (cd * _pow_recursion(cd, ls - 1));
}

