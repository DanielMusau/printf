#ifndef _MAIN_
#define _MAIN_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
void v_printf(const char *format, va_list args);
void print_ch(const char *format, va_list args);

#endif
