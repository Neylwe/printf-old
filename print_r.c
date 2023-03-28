#include "holberton.h"
/**
 *print_r - prints a string in reverse
 *@list:list to increment
 *Return:no. of charcters printed
 */
int print_r(va_list list)
{
	char *s = va_arg(list, char *);
	int a, c;

	if (s == NULL)
		s = ")llun(";
	a = 0;
	while (s[a])
	{
		a++;
	}
	a--;
	for (; a >= 0; a--)
	{
		_putchar(s[a]);
		c++;
	}
	return (c);
}
