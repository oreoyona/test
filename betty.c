#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include "print_s.c"
#include "print_num.c"
#include "check_format.c"
#include "print_int_char.c"
/**
* main - the main functon of our c program
* Return: void
*/
int main (void)
{
    print_int_char("Gloire a %s ans et aime la lettre %c  mais deteste la lettre %c", 25, 'A', 'x');
    return (0);
}


