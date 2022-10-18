/**
 * print_num - print every numbers
 * that is passed onto it
 * @n: the number to be printed
 * Return: void
 */
void print_num(long int n, ...)
{
        if (n < 0)
        {
                putchar('-');
                n = n * -1;
        }

        if (n == 0)
                putchar('0');

        if (n / 10)
                print_num(n / 10);
        putchar(n % 10 + '0');
}