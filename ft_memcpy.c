#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    int i;
    if (!dst)
        return (0);
    i = 0;
    while (i < n)
    {
        *(char *)(dst + i) = *(char *)(src + i);
        i++;
    }
    return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int main ()
{
    char    str[] = "abcdefg";
    char    dst[10] = "";
    printf("%s\n", ft_memcpy(dst, str, 5));
}*/
