#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_len - finds number of digits in an integer
 * @val: integer to find length for
 * Return: number of digits in integer
 */
int find_len(int val)
{
	int i = 1;

	while (val / 10 != 0)
	{
		i++;
		val = val / 10;
	}

	return (i);
}
/**
  * reverse_str - reverses the content of a string
  * @str: pointer to string
  * @len: length of string
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
  * bi_recurse - converts integer to binary through recursion
  * @val: integer to be converted
  * @str: string to hold the converted integer
  *
  * Return: void
  */
void bi_recurse(unsigned int val, char *str)
{
	if (val / 2 > 0)
	{
		*str = (val % 2) + '0';
		bi_recurse(val / 2, str + 1);
	}
}
