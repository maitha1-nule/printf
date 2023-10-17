#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int _putchar(char c);
int print(char c);
int put(char *c);
int _printf(const char *format, ...);
int print_int(va_list args);
int print_dec(va_list args);

#endif
