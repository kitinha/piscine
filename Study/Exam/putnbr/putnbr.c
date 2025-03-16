#include <unistd.h>

void    ft_putchar(char a)
{
    write (1, &a, 1);
}
void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putnbr('-');
        nb *= -1;
    }
    if(nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr (nb % 10);
    }
    if (nb < 10)
        ft_putchar(nb + '0');
}
int main()
{
    ft_putnbr(42);
}