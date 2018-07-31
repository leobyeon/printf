#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @func: The function associated
 *
 * Description: this struct is for iterating through
 * args to return the matching function
 */
typedef struct op
{
	char *op;
	char * (*func)(char *a, va_list);
} op_t;

int _printf(const char *format, ...);
void itoa(int val, char *s);
char *_strcat(char *dest, char *src);
char *op_char(char *str, va_list args);
char *op_str(char *str, va_list args);
char *op_int(char *str, va_list args);
char *op_dec(char *str, va_list args);
char *op_nf(char *str, va_list args);
char *(*get_op_func(char *s))(char *, va_list);
void reverse_str(char *str, int len);
int find_len(int val);

#endif /* HOLBERTON_H */
