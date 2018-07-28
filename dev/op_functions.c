#include "holberton.h"
#include <stdio.h>

char op_char(char *str, char *op, int val)
{
	unsigned int old_len;
	unsigned int new_size;
	char *newstr;

	for (old_len = 0; str[old_len]; old_len++)
		;

	new_size = (old_len + 1) + 1;

	newstr = _realloc(str, old_len, new_size);
	
	newstr[old_len++] = val;
	newstr[old_len++] = '\0';

	return (newstr);
}

char op_str(char *str, char *op, char *val)
{
	unsigned int old_len;
	unsigned int val_len;
	unsigned int new_size;
	char *newstr;

	for (old_len = 0; str[old_len]; old_len++)
		;

	for (val_len = 0; val[val_len]; val_len++)
		;

	new_size = (old_len + 1) + val_len;

	newstr = _realloc(str, old_len, new_size);

	for (val_len = 0; val[val_len]; val_len++)
		newstr[old_len++] = val[val_len];

	newstr[old_len++] = '\0';

	return (newstr);
}

char op_int(char *str, char *op, int val)
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

char op_dec(char *str, char *op, int val)
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

