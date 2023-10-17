#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _putchr(char c);
int putss(char *c);
int is_digit(char c);
int is_printable(char c);
int _printf(const char *format, ...);
#endif
