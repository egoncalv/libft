#include <stddef.h>
#include <stdlib.h>

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

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ptr;

    if (!(ptr = malloc(sizeof(char) * len + 1)))
        return (0);
    ft_memcpy(ptr, s + start, len);
    return (ptr);
}
/*
#include <stdio.h>
int main ()
{
    char    array[] = "abcdefghijkl";
    printf("%s\n", ft_substr(array, 3, 5));
    return(0);
}*/