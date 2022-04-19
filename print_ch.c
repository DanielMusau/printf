#include "main.h"

/**
 * print_ch - prints out character.
 * @format: Character printed out.
 * @args: argument list
 * Return: null.
 */
void print_ch(const char *format, va_list args)
{
	char ch;
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
			if (*format == 'c')
			{
				ch = va_arg(args, int);
				putchar(ch);
			}
			state = 0;
		}
		format++;
	}
}

