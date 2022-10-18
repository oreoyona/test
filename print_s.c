void print_s(char *str)
{
    int x, l = 0;
    char strcp;

    while (str[l])
        l++;

    for (x = 0; x < l; x++)
    {
        if (str[x] == '%')
        {
            x = x + 2;
        }
        putchar(str[x]);
    }
}

void x_f(int l, const char *format, va_list ap)
{
    int x = 0;
    char next;
    int tmp;
    for (x = 0; x < l; x++)
    {
        if (format[x] == '%')
        {
            next = format[x + 1];
            if (check_format(next) == -1)
            {
                tmp = va_arg(ap, int);
                putchar(format[x]);
            }

            if (check_format(next) == 0 && next == 'd')
            {
                tmp = va_arg(ap, int);
                print_num(1, tmp);
                x += 2;
            }

            if (next == 'c')
            {
                tmp = va_arg(ap, int);
                putchar(tmp);
                x += 2;
            }
        }
        else
            putchar(format[x]);
    }
}