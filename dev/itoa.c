#include "holberton.h"
#include <stdio.h>

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
