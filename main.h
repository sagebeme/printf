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
int dec_to_binary(int n);
int rev_str(char *s);
int rot13(char *point);
int _strlen(char *s);

#endif
