#include <stddef.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    int i;

    i = 0;
    while (i < len)
    {
        *(char *)(dst + i) = *(char *)(src + i);
        i++;
    }
    return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main ()
{
    char    str[] = "abcde";
    char    dst[10] = "jhieda";

    printf("%s\n", ft_memmove(dst, str, 4));
}
*/
