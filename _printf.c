#include "main.h"

/**
 * _printf - returns the number of characters printed.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	v_printf(format, args);

	va_end(args);

	return (0);
}
