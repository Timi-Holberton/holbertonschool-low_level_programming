#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i = 0;
	int *j = &i;

	if (s == 0)
	{
		for(i; i[s] != '\0'; i++);
	}
	else
	{
		for(s; s[*j] >= 0; s++);
	}
}
