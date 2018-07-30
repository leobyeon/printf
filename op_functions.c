#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * reverse_array - reverses the content of an array of integers
  * @a: array
  * @n: number of elements in the array
  *
  * Return: void
  */
void reverse_str(char *str, int len)
{
	int start = len - 1;
	int end = 0;
	char tmp;

	while (start > end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start--;
		end++;
	}
}

/**
  * op_char - takes in an argument and checks for a null terminating byte
  * @str: original string
  * @args: character passed
  * Return: pointer to str
  */
char *op_char(__attribute__((unused)) char *str, va_list args)
{
	char *newstr = va_arg(args, char *);

	return (newstr);
}

/**
  * op_str - takes in an argument and checks for a null terminating byte
  * @str: original string
  * @args: character passed
  * Return: pointer to str
  */
char *op_str(__attribute__((unused)) char *str, va_list args)
{
	char *newstr = va_arg(args, char *);

	return (newstr);
}


/**
  * op_int - takes in an argument and converts int to char
  * @str: original string
  * @args: character passed
  * Return: pointer to str
  */
char *op_int(__attribute__((unused)) char *str, va_list args)
{
	unsigned int val_len;
	int val = va_arg(args, int);
	char *newstr;

	if (val >= 0)
	{
		val_len = find_len(val);

		newstr = malloc(val_len + 1);
		if (!newstr)
			return (NULL);

		itoa(val, newstr);
		newstr[val_len] = '\0';
		reverse_str(newstr, val_len);
	}
	else
	{
		val_len = find_len(val);

		newstr = malloc(val_len + 2);
		if (!newstr)
			return (NULL);

		itoa(val, newstr);
		newstr[val_len] = '-';
		newstr[val_len + 1] = '\0';
		reverse_str(newstr, val_len + 1);
	}


	return (newstr);
}

/**
  * op_dec - takes in an argument and converts int to char
  * @str: original string
  * @args: character passed
  * Return: pointer to str
  */
char *op_dec(__attribute__((unused)) char *str, va_list args)
{
	unsigned int val_len;
	int val = va_arg(args, int);
	char *newstr;

	if (val >= 0)
	{
		val_len = find_len(val);

		newstr = malloc(val_len + 1);
		if (!newstr)
			return (NULL);

		itoa(val, newstr);
		newstr[val_len] = '\0';
		reverse_str(newstr, val_len);
	}

	else
	{	
		val_len = find_len(val);

		newstr = malloc(val_len + 2);
		if (!newstr)
			return (NULL);

		itoa(val, newstr);
		newstr[val_len] = '-';
		newstr[val_len + 1] = '\0';
		reverse_str(newstr, val_len + 1);
	}

	return (newstr);
}
