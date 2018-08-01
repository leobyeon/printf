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
	unsigned int val = va_arg(args, unsigned int);
	int i;
	unsigned int t = val;
	char *newstr;
	char tmp;

	if (val == 0)
	{
		newstr = malloc(2);
		newstr[0] = '0';
		newstr[1] = '\0';
		return (newstr);
	}

	while (t > 0)
	{
		t /= 2;
		len++;
	}

	newstr = malloc(len + 1);

	if (!newstr)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		tmp = val % 2 + '0';
		*(newstr + i) = tmp;
		val /= 2;
	}
	newstr[i] = '\0';

	reverse_str(newstr, len);

	return (newstr);
}
