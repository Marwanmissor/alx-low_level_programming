#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @m: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int m)
{
	if (m < 0)
		return (-1);
	return (actual_sqrt_recursion(m, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @m: number to calculate the sqaure root of
 * @k: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int m, int k)
{
	if (k * k > m)
		return (-1);
	if (k * k == m)
		return (k);
	return (actual_sqrt_recursion(m, k + 1));
}

