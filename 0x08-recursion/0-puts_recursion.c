#include<stdio.h>
#include"main.h"

    void _puts_recursion(char *str)
    {
        if(*str=='\0')
        {
            _putchar('\n');
        }
        else
        {
            _putchar(*str);
            _puts_recursion(str + 1);
        }
    }