#include "main.h"
/********** PRINT_CHAR ************/

/**
 * print_char - prints a char
 * @buffer: output buffer
 * @buffer_index: pointer to the current buffer index
 * @character: character to be printed
 * Return: 1 on success, 0 otherwise
 */
int print_char(char *buffer, int *buffer_index, char character)
{
        if (*buffer_index < BUFF_SIZE - 1)
        {
                buffer[(*buffer_index)++] = character;
                return (1);
        }
        else
        {
                return (0);
        }
}

/************ PRINT_STRING ***********/

/**
 * print_string - Append a string to the buffer
 * @buffer: output buffer
 * @buffer_index: pointer to the current buffer index
 * @str: string to be printed
 * Return: The number of characters printed
 */
int print_string(char *buffer, int *buffer_index, const char *str)
{
    int printed_chars = 0;

    while (*str)
    {
        if (*buffer_index < BUFF_SIZE - 1)
	{
            buffer[(*buffer_index)++] = *str;
            printed_chars++;
        }
       	else
	{
            break;
        }
        str++;
    }
    return printed_chars;
}

/********** PRINT_INT **************/

/**
 * print_int - Append an integer to the buffer
 * @buffer: The output buffer
 * @buffer_index: Pointer to the current buffer index
 * @num: The integer to be printed
 * Return: The number of characters printed
 */
int print_int(char *buffer, int *buffer_index, int num)
{
	int printed_chars = 0;
	int div = 1;

   if (*buffer_index >= BUFF_SIZE - 1)
   {
        return -1;
   }

    if (num < 0)
    {
        buffer[(*buffer_index)++] = '-';
        num = -num;
        printed_chars++;
    }
    else if (num == 0)
    {
        buffer[(*buffer_index)++] = '0';
        printed_chars++;
        return printed_chars;
    }
    while (div <= num / 10)
    {
        div *= 10;
    }

    while (div > 0)
    {
        int digit = num / div;
        buffer[(*buffer_index)++] = '0' + digit;
        num %= div;
        div /= 10;
        printed_chars++;
    }

    return printed_chars;
}

/********** PRINT_PERCENT *************/

/**
 * print_percent -  Print the '%' character to the buffer
 * @buffer: output buffer where the '%' character is printed
 * @buffer_index: A pointer to the current index in the buffer
 * Return: 1 if successful or 0 otherwise
 */
int print_percent(char *buffer, int *buffer_index)
{
	return print_char(buffer, buffer_index, '%');
}
