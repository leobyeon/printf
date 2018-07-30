#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * itoa - converts integer to ascii
  * @n: integer to convert
  * @s: pointer to string
  */
void itoa(int n, char *s)
{
	int i, sign = n;

	if (sign < 0)
	n = -n;
	i = 0;

	do {       /* generate digits in reverse order */
	s[i++] = n % 10 + '0';   /* get next digit */
	} while ((n /= 10) > 0);     /* delete it */

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
}
