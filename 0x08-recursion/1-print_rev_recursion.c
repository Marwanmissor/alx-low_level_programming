#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @mar: string to print
 */
void _print_rev_recursion(char *mar)
{
	if (*mar)
	{
		_print_rev_recursion(mar + 1);
		_putchar(*mar);
	}
}

