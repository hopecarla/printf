#include "main.h"
/**
 * is_printable - checks if a character is printable
 * @c: character to be checked
 * Return: 1 if c is printable or 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	
	return (0);
}

/**
 * is_digit - checks if a character is a digit
 * @c: character to be evaluated
 * Return: 1 if c is a digit or 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
