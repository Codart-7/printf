#include "main.h"

/**
 * print_hex - prints a number in hexadecimal base
 * @l: va_list of arguments from printf
 * @f: pointer to determine if a flag is passed
 * Description: calls convert to conver to the right base
 * Return: the number of char printed
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - prints a number in uppercase hexadecimal base
 * @l: argument from _printf
 * @f: pointer to determine flag passed
 * Description: calls convert function to convert to the right base
 * Return: the number of chars printed
 */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - prints a number in base 2
 * @l: argument from printf
 * @f: pointer to determine flag passed
 * Description: calls convert funtion to convert to the right base
 * Return: the number of chars printed
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - prints number in base 8
 * @l: argument from printf
 * @f: pointer to determine the flag passed
 * Description: calls the convert function to convert to the right base
 * Return: the number of chars printed
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
