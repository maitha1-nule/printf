#include "main.h"

/**
 * print - returns a character
 * @c: character input
 * Return: 1
 */
int print(char c)
{
	return (write(1, &c, 1));
}
