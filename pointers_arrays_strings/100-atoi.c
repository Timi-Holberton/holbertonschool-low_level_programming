#include <stdio.h>
#include "main.h"

/**
 * _atoi - Entry point
 * @s : var
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int result = 0;

	while ((*s <= '0') && (*s >= '9'))
	{
		result = (result * 10 + (*s - '0'));
		s++;
	}
	return (result);
}
