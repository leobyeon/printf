#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
