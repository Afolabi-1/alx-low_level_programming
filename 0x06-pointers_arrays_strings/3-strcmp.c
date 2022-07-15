#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: always 0
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 < s2 || s2 > s1)
	{
		return (-15);
	}
	else if (s1 > s2 || s2 < s1)
	{
		return (15);
	}
	else if (s1 == s2)
		return (0);
	return (0);
}