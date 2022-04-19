#include "main.h"

/**
 * _printf - returns the number of characters printed.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
void v_printf(const char *format, va_list args)
{
	char ch;
	const char *s;
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			}
			else 
			{
				putchar(*format);
			}
		} else if (state == 1)
		{
			switch (*format)
			{
				case 'c':
					ch = va_arg(args, int);
					putchar(ch);
					break;
				case 's':
					s = va_arg(args, const char *);
					while (*s)
					{
						putchar(*s++);
					}
					break;
				case 'd':

					break;
				case 'x':

					break;
				case 'p':
					putchar('0');
					putchar('x');
					break;
			}
			state = 0;
		}
		format++;
	}
}
void _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	v_printf(format, args);

	va_end(args);
}
