#include <unistd.h>

/**
 * _putchar - writes the character lmm to stdout
 * @lmm: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char lmm)
{
	return (write(1, &lmm, 1));
}
