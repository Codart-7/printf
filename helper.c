#include "main.h"

/**
 * print_char - prints a character
 * @ap: character
 */
void print_char(va_list ap)
{
	char letter;

	letter = va_arg(ap, int);
	buf(letter);
}

/**
 * print_string - prints string
 * @ap: string
 */
void print_string(va_list ap)
{
	char *str;
	int i = 0;

	str = va_arg(ap, char *);

	while (*(str + i))
	{
		buf(*(str + i));
		i++;
	}
}

/**
 * print_percentage - prints the percentage sign
 * @ap: sign
 */
void print_percentage(va_list ap)
{
	char letter;

	letter = va_arg(ap, int);
	buf(letter);
}
