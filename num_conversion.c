#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - prints an unsigned int in binary format
 *@list: list to increment
 *Return: number of characters printed
 */
int print_binary(va_list list)
{
	unsigned int num;
	int a, b, len;
	char *str;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len = base_len(num, 2);
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (-1);
	a = 0;
	while (num > 0)
	{
		str[a] = num % 2;
		num = num / 2;
		a++;
	}
	for (b = (a - 1); b >= 0; b--)
	{
		_putchar(str[b] + '0')
	}
	free(str);
	return (len);
}
/**
 *print_octal - prints a number in octal
 *@list:list to increment
 *Return:no. of characters printed
 */
int print_octal(va_list list)
{
	unsigned int num;
	int a, b, len;
	char *str;

	num = va_arg(list, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len = base_len(num, 8);
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
		return (-1);
	}
	a = 0;
	while (num > 0)
	{
		str[a] = num % 8;
		num = num / 8;
		a++;
	}
	for (b = (a - 1); b >= 0; b--)
	{
		_putchar(str[b] + '0')
	}
	free(str);
	return (len);
}
/**
 *print_Hex - prints unsigned int in Hex upper format
 *@list:list to increment
 *Return:no. of characters printed
 */
int print_Hex(va_list list)
{
	unsigned int num;
	int a, b, len, temp;
	char *str;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len = base_len(num, 16);
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
		return (-1);
	}
	a = 0;
	while (num > 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			str[a] = temp + 48;
			a++;
		}
		else
		{
			str[a] = temp + 55;
			a++;
		}
		num = num / 16;
	}
	for (b = (a - 1); b >= 0; b--)
	{
		_putchar(str[b]);
	}
	free(str);
	return (len);
}
/**
 *print_hex - prints unsigned int in hex lower format
 *@list:list to increment
 *Return:no. of characters printed
 */
int print_hex(va_list list)
{
	unsigned int num;
	int a, b, len, temp;
	char *str;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len = base_len(num, 16);
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
		return (-1);
	}
	a = 0;
	while (num > 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			str[a] = temp + 48;
			a++;
		}
		else
		{
			str[a] = temp + 87;
			a++;
		}
		num = num / 16;
	}
	for (b = (a - 1); b >= 0; b--)
	{
		_putchar(str[b]);
	}
	free(str);
	return (len);

}
/**
 *print_S - handles custom conversion S which for instance
 *         -prints '\n' as \x and hex equivalent of n
 *@list: list to increment
 *Return: number of characters printed
 */

int print_S(va_list list)
{
	char *hex;
	char *s = va_arg(list, char *);
	unsigned int a = 0, b;
	int c = 0, len;

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		if ((s[a] > 0 && s[a] < 32) || s[a] >= 127)
		{
			putchar('\\');
			_putchar('x');
			len = base_len(s[a], 16);
			if (len != 2)
			{
				_putchar('0');
				c++;
			}
			c += 2;
			hex = hex_conv(s[a]);
			for (b = 0; hex[b]; b++)
			{
				_putchar(hex[b]);
				c++;
			}
		}
		else
		{
			_putchar(s[a]);
			c++;
		}
	}
	return (c);
}
