#ifndef _MAIN_
#define _MAIN_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: The operator.
 * @f: the function associated.
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
<<<<<<< HEAD
<<<<<<< HEAD
=======
void v_printf(const char *format, va_list args);
void print_ch(const char *format, va_list args);
>>>>>>> printf_function
=======
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
>>>>>>> printf_function

#endif
