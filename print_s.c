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