#include "main.h"

/************** PRINT_PTR *************/

/**
 * print_ptr - Print a pointer to the buffer
 * @buffer: output buffer where the pointer is printed
 * @buffer_index: A pointer to the current index in the buffer
 * @ptr: pointer to be printed
 * Return: number of characters printed 
 */
int print_ptr(char *buffer, int *buffer_index, void *ptr)
{
	int printed_chars = 0;

	unsigned long ptr_value = (unsigned long)ptr;
	unsigned int num = (unsigned int)ptr_value;
	char format = 'x';

	if (*buffer_index >= BUFF_SIZE - 1)
	{
		return -1;
	}
	if (ptr_value == 0)
	{
		buffer[(*buffer_index)++] = '0';
		return (-1);

	}
	return print_hex(buffer, buffer_index, num, format);
}


