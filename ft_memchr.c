#include <stddef.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (*(unsigned char *)(s + i) == (unsigned char)c)
            return ((void *)s + i);
        i++;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
    char    str[] = "tesyteeeejadsdjsfsdf";
    char    c = 'j';
    size_t  n = 26;

    printf("%p\n", memchr(str, c, n)); 
    printf("%p\n", ft_memchr(str, c, n)); 
}
*/
