#include<stdio.h>
#include"main.h"

    /// @brief 
    /// @param str 
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