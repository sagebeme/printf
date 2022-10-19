#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _putstring(char *s);
int print_number(int n);
int print_digit(int n);
int _printf(const char *format, ...);

#endif
