#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @stt: string to print
 */
void _puts_recursion(char *stt)
{
	if (*stt == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*stt);
	_puts_recursion(stt + 1);
}
