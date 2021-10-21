int ft_isspace(int c)
{
    if (c >= 9 && c <= 13 || (c == 32))
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    res = 0;
    i = 0;
    sign = 1;
    while (ft_isspace((int)(str[i])))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res += str[i] - 48;
        i++;
    }

    return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char str[] = "-123asd";
    printf("atoi: %d\n", atoi(str));
    printf("ft_atoi: %d\n", ft_atoi(str));
    return (0);
}*/
