int ft_isalnum(int c)
{
    if (c >= '0' && c <= '9' || (c >= 'a' && c <= 'z') 
        || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}
/*
#include <stdio.h>
int main ()
{
    unsigned char   a = '*';
    unsigned char   b = '2';

    printf("Is '*' alnum: %d \n", ft_isalnum(a));
    printf("Is '2' alnum: %d \n", ft_isalnum(b));
}
*/
