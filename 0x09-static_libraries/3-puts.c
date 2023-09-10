#include "main.h"

void _puts/**
            * prints a string, followed by a new line
            * @str - string to be printed
            */(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str++;
        }
        _putchar('\n');
}

