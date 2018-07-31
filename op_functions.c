#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  * op_char - takes in an argument and checks for a null terminating byte
  * @str: original string
  * @args: character passed
  * Return: pointer to str
  */
char *op_char(__attribute__((unused)) char *str, va_list args)
{
	char *newstr;

	newstr = malloc(2);

	if (!newstr)
		return (NULL);

	newstr[0] = va_arg(args, int);
	newstr[1] = '\0';

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
	char *new2;
	int i = 0, z = 0;

	if (newstr)
	{
		while (newstr[i])
			i++;
		new2 = malloc(i + 1);
		if (!new2)
			return (NULL);
		for (z = 0; z < i; z++)
			new2[z] = newstr[z];
		new2[z] = '\0';
	}
	else
	{
		new2 = malloc(7);
		if (!new2)
			return (NULL);
		new2[0] = '(';
		new2[1] = 'n';
		new2[2] = 'u';
		new2[3] = 'l';
		new2[4] = 'l';
		new2[5] = ')';
		new2[6] = '\0';
	}
	return (new2);
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

/**
 * op_nf - returns null pointer
 * Description - dummy function that returns a null pointer
 * @str: original string
 * @args: character passed
 * Return: null pointer;
 */
char *op_nf(char *str,  va_list args)
{
	(void) str;
	(void) args;

	return (0);
}

