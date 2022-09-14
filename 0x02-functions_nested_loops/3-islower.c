#include "main.h"

/**
 * Checks if a character is lowercase.
 *
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
