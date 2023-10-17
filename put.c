#include "main.h"

/**
 * put - prints a string
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
