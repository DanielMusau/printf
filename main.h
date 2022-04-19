#ifndef _MAIN_
#define _MAIN_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);

typedef struct identifierStruct
{
char *indentifier;
int (*printer)(va_list);
} identifierStruct;

#endif
