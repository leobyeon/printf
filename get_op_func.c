#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
/**
  * get_op_func - returns a pointer to the function that corresponds
  * to the operator given as a parameter
  * @s: string given
  *
  * Return: pointer to the matching function
  */
char *(*get_op_func(char *s))(char *, va_list)
{
	op_t ops[] = {
		{"c", op_char},
		{"s", op_str},
		{"i", op_int},
		{"d", op_dec},
		{"b", op_binary},
		{NULL,  op_nf}
	};
	int i = 0;
	int end;

	for (end = 0; s[end]; end++)
		;
	end--;
	while (ops[i].op)
	{
		if (s[end] == *(ops[i].op))
			return (ops[i].func);
		i++;
	}
	return (ops[i].func);
}
