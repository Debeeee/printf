#include "main.h"

/**
<<<<<<< HEAD
=======
 * print_char - returns the character
 * @buff_dest: buffer
 * @arg: list of arguments
 * @buff_count: index of buffer pointer
 * Return: buffer index
 */
int print_char(char *buff_dest, va_list arg, int buff_count)
{
	char c = va_arg(arg, int);

	buff_dest[buff_count] = c;

	return (++buff_count);
}

/**
>>>>>>> 376bba663e0907b6a8e7886299124b0a9a1da23e
 * print_str - writes the string
 * @buff_dest: character string
 * @arg: list of arguments
 * @buff_count: index f buffer pointer
 * Return: The number of characters printed.
 */
int print_str(char *buff_dest, va_list arg, int buff_count)
{
	char *str;
	int i = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";

	if (str[0] == '\0')
	{
		buff_dest[buff_count] = '\0';
		buff_count++;
	}

	while (str[i] != '\0')
	{
		buff_dest[buff_count] = str[i];
		i++;
		buff_count++;
	}

	return (buff_count);
<<<<<<< HEAD
}
=======
}

#include "main.h"

/**
 * print_perc - returns the character
 * @buff_dest: character
 * @arg: list of arguments
 * @buff_count: index of buffer pointer
 * Return: the buffer index
 */
int print_perc(char *buff_dest, va_list arg, int buff_count)
{
	char c = va_arg(arg, int);

	/* reassigned due to unexpected behaviour */
	c = '%';

	buff_dest[buff_count] = c;

	return (++buff_count);
}
>>>>>>> 376bba663e0907b6a8e7886299124b0a9a1da23e
