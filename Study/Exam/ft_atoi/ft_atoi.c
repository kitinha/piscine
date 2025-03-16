int ft_atoi(const char *str)
{
    int result = 0;
    int i = 0;
    int sign = 1;
    while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
            i++;
        }
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result = result + str[i] - '0';
        i++;
    }
    return (result * sign);
}
#include <stdio.h>
int main()
{
    printf("%d", ft_atoi("42"));
}