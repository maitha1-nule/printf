#include "main.h"

/**
 * put - prints a string
 * @c: this is the character to help in the printing
 *
 * Return: numberof opf bytes
 */
int put(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			print(c[count]);
		}
	}
	return (count);

}
