#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	char a;
	char *b;

	a = 'H';
	b = "Hello World!";

	_printf("%c,\n %s\n", a, b);
	_printf("%%\n");
	return (0);
}
