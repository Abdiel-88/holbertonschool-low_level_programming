#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything, depending on the format.
 * @format: A string representing the data types of the arguments.
 * ...: A variable number of parameters to print.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *str;
const char *formats = "cifs";
va_start(args, format);
while (format != NULL && format[i] != '\0')
{
j = 0;
while (formats[j] != '\0')
{
if (format[i] == formats[j])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
if (format[i + 1] != '\0')
printf(", ");
break;
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
