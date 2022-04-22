#include "main.h"

/**
 * print_number - prints a number sent to this function.
 * @arguments: List of arguments.
 *
 * Return: The number of arguments printed.
 */
int print_number(va_list arguments)
{
	int i, div, len;
	unsigned int num;

	i = va_arg(arguments, int);
	div = 1;
	len = 0;

	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
		num = i;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0;)
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
