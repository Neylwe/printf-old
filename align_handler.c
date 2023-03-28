#include "main.h"
#include <strings.h>
#include <string.h>

/**
 *put_string - prints a string
 *@str:string to print
 *Return:no. of characters printed
 */

int put_string(char *str)

{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
