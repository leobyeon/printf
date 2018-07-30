#include "holberton.h"
#include <stdio.h>

/**
  * itoa - converts integer to ascii
  * @val: integer to be converted
  * @s: string to hold the converted integer
  *
  * Return: void
  */
void itoa(int val, char *s)
{
	if (val / 10 != 0)
		itoa(val / 10, s + 1);

	if (val / 10 == 0 && val < 0)
		*s = '-';

	if (val < 0)
		*s = ((val * -1) % 10) + '0';
	else
		*s = (val % 10) + '0';
}
