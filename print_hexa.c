#include "main.h"

/**
*print_hexa - prints a hexidecimal number in lower of upper
*@types: list of arguments
*@map_to: array of values to map the number to
*@buffer: buffer array to handle print
*@width: get width
*@flags: calculates active flags
*@flag_ch: calculates active flags
*@precision: precision specification
*@size: size specifier
*Return: number of chars printed
*/
int_print_hexa(va_list types, char map_to[], char buffer[],
int flags, char flag_ch, int width, int precision, int size)
{
int i = BUFF_SIZE - 2;
unsigned long int num = va_args(types, unsigned long int);
unsigned long int init_num = num;

UNUSED(width);

num = convert_sizesgnd(num, size);

if(num == 0)
buffer[i--] = '0';

buffer[BUFFER_SZIE -1] = '\0';

while(num > 0)
{
buffer[i--] = map_to[num % 16];
num /= 16;
}

if (flags & F_HASH && init_num != 0)
{
buffer[i--] = flag_ch;
buffer[i--] = '0';
}
i++;
return(write_unsgnd(0, i, buffer, flags , width, precision, size));
}
