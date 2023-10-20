#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

int _printf(const char *format, ...);
int print_char(char *buffer, int *buffer_index, char character);
int print_string(char *buffer, int *buffer_index, const char *str);
int print_int(char *buffer, int *buffer_index, int num);
int print_unsign(char *buffer, int *buffer_index, unsigned int num);
int print_hex(char *buffer, int *buffer_index, unsigned int num, char format);
int print_ptr(char *buffer, int *buffer_index, void *ptr);
int print_percent(char *buffer, int *buffer_index);
#endif
