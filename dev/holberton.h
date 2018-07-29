#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*func)(char *a, va_list args);
} op_t;

int _printf(const char *format, ...);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void itoa(int val, char *s);
char *_strcat(char *dest, char *src);
char *op_char(char *str, va_list args);
char *op_str(char *str, va_list args);
char *op_int(char *str, va_list args);
char *op_dec(char *str, va_list args);

#endif /* HOLBERTON_H */
