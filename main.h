#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - A new struct defining what to print
 * @symbol: A symbol representing a data type.
 * @func: A function pointer to function that prints
 *        data according to the type specified by symbol.
 */
struct print
{
	char *symbol;
	void (*func)(va_list ap);
};

/**
 * spec_p - a new data type for struct print
 */
typedef struct print spec_p;


/* _printf */
int _printf(const char *format, ...);

/* to print a character to stdout */
int buf(char c);

void print_string(va_list ap);
void print_char(va_list ap);
void print_percentage(va_list ap);

#endif
