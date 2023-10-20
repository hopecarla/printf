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

/************* PRINT_UNSIGN **************/

/**
 * print_unsign - Print an unsigned integer to the buffer
 * @buffer: The output buffer where the unsigned integer is printed
 * @buffer_index: A pointer to the current index in the buffer
 * @num: the unsigned integer to be printed
 * Return: number of characters to be printed
 */
int print_unsign(char *buffer, int *buffer_index, unsigned int num)
{
	int printed_chars = 0;
	unsigned int num_copy = num;
	int num_length = 0;
	int divisor = 1;
	int i, j, digit;

	if (*buffer_index >= BUFF_SIZE - 1)
	{
		return -1;
	}
	if (num == 0)
	{
		buffer[(*buffer_index)++] = '0';
		return (1);
	}
	while (num_copy > 0)
	{
		num_copy /= 10;
		num_length++;
	}
	for (int i = num_length - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			 divisor *= 10;
		}
		digit = (num / divisor) % 10;
		buffer[(*buffer_index)++] = '0' + digit;
		printed_chars++;
	}
	return (printed_chars);
}
