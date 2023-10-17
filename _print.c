#include "main.h"
/**
 * print - print to stdout format
 * @format: format specifiers
 * Return: bytes printed
 */
int _printf(const char *format, ...)
{
        unsigned int i, count = 0;

        va_list list;

        if (format || (format[0] == '%' && format[1] == '\0'))
                return (-1);
        va_start(list, format);
        for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] != '%')
		{
			_putchr(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchr(va_arg(list, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			count = putss(va_arg(list, char *));
			i++;
			count += (count - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchr('%');
		}
		count += 1;
	}
	va_end(list);
	return (count);
}
