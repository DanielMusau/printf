#include "main.h"

/**
 * v_printf - Prints string as output.
 * @format: type to be printed out.
 * @args: Argument list.
 *
 * Return: nothing.
 */
void v_printf(const char *format, va_list args)
{
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
			if (*format == 's')
			{
				s = va_arg(args, const char *);
				while (*s)
				{
					putchar(*s++);
				}
			}
			state = 0;
		}
		format++;
	}
}

