#include "main.h"

/**
 *get_flags - acts responsively when a flag is invoked
 *@a:flag character
 *@f:struct flags pointer
 *Return:0 - flag invoked,1 otherwise
 */
int get_flags(char a, han_s *f)
{
	int i = 0;

	switch (a)
	{
	case '+':
		(*f).plus = 1;
		i = 1;
		break;
	case ' ':
		(*f).space = 1;
		i = 1;
		break;
	case '#':
		(*f).hash = 1;
		i = 1;
		break;
	case '-':
		(*f).minus = 1;
		i = 1;
		break;
	case '0':
		(*f).zero = 1;
		i = 1;
		break;
	}
	return (i);
}
/**
 *get_modifier - finds the modifier and invokes corresponding func
 *@b:format string
 *@handler:handler struct
 *Return:1 if modifier is valid
 */
int get_modifier(char b, han_s *handler)
{
	int i = 0;

	switch (b)
	{
	case 'h':
		i = 1;

		handler->h_mod = 1;
		break;
	case 'l':
		i = 1;
		handler->l_mod = 1;
		break;
	}
	return (i);
}
/**
 *get_width - gets width from a width specifier
 *@i:format string
 *@list:list to increment
 *Return:string
 */
char *get_width(char *i, va_list list)

{
	int width = 0;

	if (*i == '*')
	{
		width = va_arg(list, int);
		i++;
	}
	else
	{
		while (*i >= 0 && *i <= 9)
		{
			width = width * 10 + (*i++ - '0');
		}
	}
	return (i);
}
