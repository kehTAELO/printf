#include <stdio.h>
#include "main.h"

/**
*_printf - produces output according to a format.
*@format: charcater string(c,s,%)
*by Taelo and Charmaine
*Return: number of characters printed
*/

int _printf(const char *format, ...)
{
int count = 0;
va_list args;
va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
{
char c = va_arg(args, int);
count += write(1, &c, 1);
break;
}
case 's':

char *s = va_arg(args, char *)
count += write(1, s, strlen(s));
break;
}
case '%':
{
count += write(1, "%", 1);
break;
}
}
}
else
{
count += write(1, format, 1);
}
format++;
}
va_end(args);
return (count);
}
