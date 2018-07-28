#include "holberton.h"
#include <stdio.h>

void itoa(int val, char *s)
{
	if (val < 0 && val / 10 == 0)
		strconcat(s, '-');

	if (val / 10 > 0)
		itoa(val / 10);

	_strcat(s, val + '0');
}
