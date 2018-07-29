#ifndef HOLBERTON_H
#define HOLBERTON_H

int _printf(const char *format, ...);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void itoa(int val, char *s);
char *_strcat(char *dest, char *src);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*func)(char *a, char *b, void *p);
} op_t;

#endif /* HOLBERTON_H */
