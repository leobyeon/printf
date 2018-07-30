#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _strchr - locates a character in string
 * @c: character to look for
 * Return: 1 if found 0 otherwise
 */

int _strchr(char c)
{
	char *s = "csdibuoxXSp";

	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}
/**
 * get_convspec - gets the number of characters in the conversion specifier
 * @ptr: pointer to start of conversion specifier
 * Return: number of characters in conversion specifier
 */
int get_convspec(const char *ptr)
{
	int i = 1;
	char val;

	while (*(ptr + i) && *(ptr + i) != '%')
	{
		val = *(ptr + i);
		i++;
		if (_strchr(val))
			break;
	}
	return (i);
}
/**
 * _printf - custom printf function to print string
 * @format: pointer to format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arglist;
	int i = 0, x = 0, z = 0;
	int stored = 0;
	char *outstr;
	char *tempstr;
	char *convspec;
	int totprinted = 0;


	if (!format)
	{
		return (0);
	}
	va_start(arglist, format);
	outstr = malloc(1024);
	if (!outstr)
		exit(97);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			outstr[stored] = '%';
			stored++;
			i += 2;
		}
		else if (format[i] == '%')
		{
			x = get_convspec((format + i));
			convspec = malloc(x + 1);
			if (!convspec)
				exit(98);
			for (z = 0; z < x; z++)
				convspec[z] = format[i + z];
			convspec[z] = '\0';
			tempstr = get_op_func(convspec)(convspec, arglist);
			for (z = 0; tempstr[z] != 0 ; z++)
			{
				outstr[stored] = tempstr[z];
				stored++;
				if (stored == 1024)
				{
					write(1, outstr, 1024);
					totprinted += stored;
					stored = 0;
				}
			}
			free(convspec);
			i += x;
		}
		else
		{
			outstr[stored] = format[i];
			stored++;
			i++;
		}
		if (stored == 1024)
		{
			write(1, outstr, 1024);
			totprinted += stored;
			stored = 0;
		}
	}
	write(1, outstr, stored);
	totprinted += stored;
	free(outstr);
	return (totprinted);
}
