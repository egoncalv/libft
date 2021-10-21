#include <stddef.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    int     j;

    i = 0;
    j = 0;
    while (dst[i] != 0)
        i++;
    while (src[j] && i < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = 0;
    return (i);
}
/*
#include <stdio.h>
int main ()
{
    char    str[] = "tenate";
    char    dst[] = "conca";
    
    printf("%zu \n", ft_strlcat(dst, str, 11));
    printf("%s \n", dst);
}*/
