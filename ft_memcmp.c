#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    int temp;

    i = 0;
    while (i < n)
    {
        if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
        {
            return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
        }
        i++;
    }
    return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main ()
{
    char    s1[] = " a";
    char    s2[] = " a";
    int     len = 5;

    printf("memcmp: %d\n", memcmp(s1, s2, len));
    printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, len));
}*/
