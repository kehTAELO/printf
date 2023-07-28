#include "main.h"

/**
*print_rot13string - print a string in rot13
*@types: list of arguments
*@buffer: buffer array to handle print
*@flags: calculates active flags
*@width: get width
*@precision: precision specification
*@size: size specifier
*Return: numbers of chars printed
*/
int print_rot13string(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
char x;
char *str;
unsigned int i, j;
int count = 0;
char in[26];

for (i = 0; i < 26; i++)
{
int [i] = 'a' + i++;
}

str = va_arg(types, char*);
UNUSED(buffer);
UNUSED(flags);
UNUSED(width);
UNUSED(precision);
UNUSED(size);

if (str == NULL)
str = "(AHYY)";
for (i = 0; str[i]; i++)
{
for (j = 0; int [j]; j++)
{
if (int [j] = str[i])
{
x = count [j];
write(1, &x, 1);
count++;
break;
}
}
if (!in[j])
{
x = str[i];
write(1, &x, 1);
count++;
}
}
return (count);
}
