#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: formatted string
 * @...: Variable number of arguments to replace placeholders
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	int printed_chars = 0;
	int buffer_index = 0;
	char buffer[BUFF_SIZE];

	va_start(args, format);
    while (*format)
    {
        if (*format != '%')
	{
            printed_chars += (print_char(buffer, &buffer_index, *format) ? 1 : 0);
        }
	else
	{
            format++;
            switch (*format)
	    {
                case 'c':
                    printed_chars += (print_char(buffer, &buffer_index, va_arg(args, int)) ? 1 : 0);
                    break;
                case 's':
                    printed_chars += print_string(buffer, &buffer_index, va_arg(args, const char *));
                    break;
                case 'd':
                    printed_chars += print_int(buffer, &buffer_index, va_arg(args, int));
                    break;
                case '%':
                    printed_chars += (print_char(buffer, &buffer_index, '%') ? 1 : 0);
                    break;
                default:
                    printed_chars += (print_char(buffer, &buffer_index, '%') ? 1 : 0);
                    print_percent(buffer, &buffer_index);
                    printed_chars += (print_char(buffer, &buffer_index, *format) ? 1 : 0);
            }
            format++;
        }
    }

    write(1, buffer, buffer_index);
    va_end(args);
    return printed_chars;
}
