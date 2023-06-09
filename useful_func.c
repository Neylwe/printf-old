#include <stdio.h>
#include <stdlib.h>
/**
 *rev_string -reverses a string
 *@s:string to reverse
 *Return:pointer to reversed string
 */
char *rev_string(char *s)
{
	int a, max, half;
	char first, last;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	max = a - 1;
	half = max / 2;

	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
	return (s);
}
/**
 *base_len - finds length of number
 *@base: to be calculated
 *@num: checked
 *Return:length of base
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int a;

	for (a = 0; num > 0; a++)
	{
		num = num / base;
	}
	return (a);
}
/**
 *hex_conv - converts a number to any base specified by user
 *@num:number to convert
 *Return:pointer to converted string
 */
char *hex_conv(int num)
{
	char *str;
	int a, len;

	a = 0;
	len = base_len(num, 16);
	str = malloc((sizeof(char) * len) + 1);
	if (num == 0)
	{
		str[a] = 0;
	}
	a = 0;
	while (num > 0)
	{
		if ((num % 16) < 10)
		{
			str[a] = (num % 16) + 48;
			a++;
		}
		else
		{
			str[a] = (num % 16) + 55;
			a++;
		}
		num /= 16;
	}
	rev_string(str);
	return (str);
}
