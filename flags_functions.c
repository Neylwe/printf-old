#include "main.h"

/**
 * flag_plus - Calculates active flags.
 * @list: List of arguments to be printed.
 * Return: 1.
 */

int flag_plus(va_list list)

{
	unsigned long int add = (unsigned long int)va_arg(list, void *);

	if (add > 0)
	{
		_putchar('+');
	}
	return (1);
}
