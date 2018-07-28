#include "holberton.h"
#include <stdio.h>

/**
  * _strcmp - compares two strings
  * @s1: first operand (string)
  * @s2: second operand (string)
  *
  * Return: difference between s1 and s2
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);

	return (s1[i] - s2[i]);
}

/**
  * get_op_func - returns a pointer to the function that corresponds
  * to the operator given as a parameter
  *
  * @c: operator
  *
  * Return: pointer to the matching function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"c", op_char},
		{"s", op_str},
		{"i", op_int},
		{"d", op_dec}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (!_strcmp(s, ops[i].op))
			return (ops[i].func);
		i++;
	}
	return (0);
}
