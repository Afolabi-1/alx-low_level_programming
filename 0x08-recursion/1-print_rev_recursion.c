#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: pointer to a variable
 * Return: 0 if it is the end
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
