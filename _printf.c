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
				_putchar(*format);
			}
		} else if (state == 1)
		{
			switch (*format)
			{
				case 'c':
					ch = va_arg(args, int);
					_putchar(ch);
					break;
				case 's':
					s = va_arg(args, const char *);
					while (*s)
					{
						_putchar(*s++);
					}
					break;
				case 'd':

					break;
				case 'x':

					break;
				case 'p':
					_putchar('0');
					_putchar('x');
					break;
			}
			state = 0;
		}
		format++;
	}
}
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL},
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
