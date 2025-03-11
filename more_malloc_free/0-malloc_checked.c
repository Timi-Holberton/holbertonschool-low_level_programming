#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc (b);

	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}
