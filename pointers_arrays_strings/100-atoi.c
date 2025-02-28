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
	int moins = 1;

	if  ((*s <= '0') && (*s >= '9'))
	{
		result = (result * 10 + (*s - '0'));
	}
	return (result * moins);
}

/**
Int stringToInt(const char s[])
{
	int res = 0;
	int i = 0;

	while (i[s] != '\0')
	{
		i++;
	}

	for (i = 0; i < len; i++)
	{
		res *= 10;
		res += s[i] - '0';
	}
	return res;
}
*/
