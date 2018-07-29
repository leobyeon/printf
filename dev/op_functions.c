#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * op_char - takes in an argument and checks for a null terminating byte
  * @str: original string
  * @args: character passed
  * Return: pointer to str
  */
char *op_char(char *str, va_list args)
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
char *op_str(char *str, va_list args)
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
char *op_int(char *str, va_list args)
{
	unsigned int val_len;
	unsigned int old_len;
	int val = va_arg(args, int);
	char *newstr;

	if (val >= 0)
	{
		val_len = (val >= 1000000000) ? 10 : (val >= 100000000) ? 9 : 
			(val >= 10000000) ? 8 : (val >= 1000000) ? 7 : 
			(val >= 100000) ? 6 : (val >= 10000) ? 5 : 
			(val >= 1000) ? 4 : (val >= 100) ? 3 : 
			(val >= 10) ? 2 : 1;

		newstr = malloc(val_len + 1);
		if (!newstr)
			return (NULL);
	}

	else
	{
		val_len = (val <= -1000000000) ? 10 : (val <= -100000000) ? 9 : 
			(val <= 10000000) ? 8 : (val <= -1000000) ? 7 : 
			(val <= -100000) ? 6 : (val <= -10000) ? 5 : 
			(val <= -1000) ? 4 : (val <= -100) ? 3 : 
			(val <= -10) ? 2 : 1;
	
		newstr = malloc(val_len + 2);
		if (!newstr)
			return (NULL);
	}

	itoa(val, newstr);

	newstr[val_len + 1] = '\0';

	return (newstr);
}


/**
  * op_dec - takes in an argument and converts int to char
  * @str: original string
  * @args: character passed
  * Return: pointer to str
  */
char *op_dec(char *str, va_list args)
{
	unsigned int old_len;
	unsigned int val_len;
	unsigned int new_size;
	unsigned int i = 0;
	char *newstr;

	for (old_len = 0; str[old_len]; old_len++)
		;

	val_len = (val >= 1000000000) ? 9 : (val >= 100000000) ? 8 : 
		(val >= 10000000) ? 7 : (val >= 1000000) ? 6 : 
		(val >= 100000) ? 5 : (val >= 10000) ? 4 : 
		(val >= 1000) ? 3 : (val >= 100) ? 2 : 
		(val >= 10) ? 1 : 0;

	new_size = (old_len + 1) + val_len;

	newstr = _realloc(str, old_len, new_size);

	itoa(val, newstr);

	return (newstr);
}
