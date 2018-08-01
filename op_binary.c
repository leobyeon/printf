#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_binary - converts unsigned int into binary
  * @str: unused
  * @args: the number to convert
  *
  * Return: string that contains the binary number
  */
char *op_binary(__attribute__((unused)) char *str, va_list args)
{
	int len = 0;
	int val = va_arg(args, int);
	char *newstr;

	while (val > 0)
	{
		val /= 2;
		len++;
	}

	newstr = malloc(len + 1);
	if (!newstr)
		return (NULL);

	bi_recurse(val, newstr);

	reverse_str(newstr, len + 1);

	newstr[len + 1] = '\0';

	return (newstr);
}
