#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_len - finds number of digits in an integer
 * @val: integer to find length for
 * Return: number of digits in integer
 */
int find_len(int val)
{
	int i = 1;

	while (val / 10 != 0)
	{
		i++;
		val = val / 10;
	}

	return (i);
}
