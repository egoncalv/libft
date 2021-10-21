/*
memset will write len bytes of value c (converted to an unsigned char) to the string b and return b.
*/
void    *ft_memset(void *b, int c, unsigned int len)
{
    unsigned char   *ptr;

    ptr = b;
    while (--len > 0)
    {
        *ptr++ = (unsigned char)c;
    }
    return (b);
}
/*
#include <stdio.h>
int main ()
{
    char    str[] = "ABCDE";
    printf("Before: %s", str);
    printf("After: %s", ft_memset(str, 'C', 3));
}
*/
