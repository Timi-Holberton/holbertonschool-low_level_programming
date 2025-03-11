#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 *@b : nombre octet
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;
	if (b == 0)
	{
		return (NULL);
	}
	ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}
