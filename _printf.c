#include "main.h"

/**
 * _printf - produces output according to format
 * @format: format string containing characters and specifiers
 * Description: depending on the conversion types encountered in format,
 * this functions calls other defined helper functions to print accordingly.
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, flag;

	register int count = 0;
	spec_p function[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percentage}
	};
	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = 0; *(format + i); i++)
	{
		if (flag == 0 && *(format + i) == '%')
		{
			flag = 1;
			continue;
		}
		if (flag == 1)
		{
			j = 0;
			while (*(format + i) != *(function[j].symbol))
				j++;
			if (j < 3)
			{
				function[j].func(ap);
				count++;
			}
			flag = 0;
			continue;
		}
		count += buf(format[i]);
	}
	va_end(ap);
	return (count);
}
